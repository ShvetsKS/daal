/* file: lcn_layer_forward_types.h */
/*******************************************************************************
* Copyright 2014-2019 Intel Corporation
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

/*
//++
//  Implementation of the forward local contrast normalization layer.
//--
*/

#ifndef __LCN_LAYER_FORWARD_TYPES_H__
#define __LCN_LAYER_FORWARD_TYPES_H__

#include "algorithms/algorithm.h"
#include "data_management/data/tensor.h"
#include "data_management/data/homogen_tensor.h"
#include "services/daal_defines.h"
#include "algorithms/neural_networks/layers/layer_forward_types.h"
#include "algorithms/neural_networks/layers/lcn/lcn_layer_types.h"

namespace daal
{
namespace algorithms
{
namespace neural_networks
{
namespace layers
{
namespace lcn
{
/**
 * @defgroup lcn_layers_forward Forward Local contrast normalization (LCN) Layer
 * \copydoc daal::algorithms::neural_networks::layers::lcn::forward
 * @ingroup lcn_layers
 * @{
 */
/**
 * \brief Contains classes for the forward local contrast normalization layer
 */
namespace forward
{
/**
 * \brief Contains version 1.0 of Intel(R) Data Analytics Acceleration Library (Intel(R) DAAL) interface.
 */
namespace interface1
{

/**
 * <a name="DAAL-CLASS-ALGORITHMS__NEURAL_NETWORKS__LAYERS__LCN__FORWARD__INPUT"></a>
 * \brief %Input objects for the forward local contrast normalization layer
 * \DAAL_DEPRECATED
 */
class DAAL_EXPORT Input : public layers::forward::Input
{
public:
    typedef layers::forward::Input super;
    /**
     * Default constructor
     * \DAAL_DEPRECATED
     */
    Input();

    /**
     * Copy constructor
     * \DAAL_DEPRECATED
     */
    Input(const Input& other);

    /*
     * \DAAL_DEPRECATED
     */
    virtual ~Input() {}

    /**
     * Sets an input object for the forward local contrast normalization layer
     * \DAAL_DEPRECATED
     */
    using layers::forward::Input::set;
    /**
     * Returns an input object for the forward local contrast normalization layer
     * \DAAL_DEPRECATED
    */
    using layers::forward::Input::get;

    /**
     * Returns dimensions of weights tensor
     * \return Dimensions of weights tensor
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED_VIRTUAL virtual const services::Collection<size_t> getWeightsSizes(const layers::Parameter *parameter) const DAAL_C11_OVERRIDE;

    /**
     * Returns dimensions of biases tensor
     * \return Dimensions of biases tensor
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED_VIRTUAL virtual const services::Collection<size_t> getBiasesSizes(const layers::Parameter *parameter) const DAAL_C11_OVERRIDE;

    /**
     * Checks input object of the forward local contrast normalization layer
     * \param[in] parameter %Parameter of layer
     * \param[in] method    Computation method of the layer
     *
     * \return Status of computations
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED services::Status check(const daal::algorithms::Parameter *parameter, int method) const DAAL_C11_OVERRIDE;
};

/**
 * <a name="DAAL-CLASS-ALGORITHMS__NEURAL_NETWORKS__LAYERS__LCN__RESULT"></a>
 * \brief Results obtained with the compute() method of the forward local contrast normalization layer
 *        in the batch processing mode
 * \DAAL_DEPRECATED
 */
class DAAL_EXPORT Result : public layers::forward::Result
{
public:
    DECLARE_SERIALIZABLE_CAST(Result);
    /**
     * Default constructor
     * \DAAL_DEPRECATED
     */
    Result();

    /*
     * \DAAL_DEPRECATED
     */
    virtual ~Result() {}

    /**
     * Returns the result of the forward local contrast normalization layer
     * \DAAL_DEPRECATED
     */
    using layers::forward::Result::get;

    /**
     * Sets the result of the forward local contrast normalization layer
     * \DAAL_DEPRECATED
     */
    using layers::forward::Result::set;

    /**
     * Returns dimensions of value tensor
     * \return Dimensions of value tensor
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED_VIRTUAL virtual const services::Collection<size_t> getValueSize(const services::Collection<size_t> &inputSize,
                                                            const daal::algorithms::Parameter *par, const int method) const DAAL_C11_OVERRIDE;

    /**
     * Allocates memory to store the result of forward  local contrast normalization layer
     * \param[in] input     %Input object for the algorithm
     * \param[in] parameter %Parameter of forward local contrast normalization layer
     * \param[in] method    Computation method for the layer
     *
     * \return Status of computations
     * \DAAL_DEPRECATED
     */
    template <typename algorithmFPType>
    DAAL_EXPORT services::Status allocate(const daal::algorithms::Input *input, const daal::algorithms::Parameter *parameter, const int method);

    /**
     * Returns the result of forward local contrast normalization layer
     * \param[in] id   Identifier of the result
     * \return         Result that corresponds to the given identifier
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED data_management::TensorPtr get(LayerDataId id) const;

    /**
     * Sets the result of forward local contrast normalization layer
     * \param[in] id     Identifier of the result
     * \param[in] value  Result
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED void set(LayerDataId id, const data_management::TensorPtr &value);

    /**
     * Checks the result of the forward local contrast normalization layer
     * \param[in] input   %Input object of the layer
     * \param[in] par     %Parameter of the layer
     * \param[in] method  Computation method of the layer
     *
     * \return Status of computations
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED services::Status check(const daal::algorithms::Input *input, const daal::algorithms::Parameter *par, int method) const DAAL_C11_OVERRIDE;

protected:
    /*
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED void getSigmaDimensions(const Input *in, const Parameter *algParameter, services::Collection<size_t> &sigmaDims) const;
    /*
     * \DAAL_DEPRECATED
     */
    DAAL_DEPRECATED void getCDimensions(const Input *in, const Parameter *algParameter, services::Collection<size_t> &cDims) const;

    /**
     * \private
     * \DAAL_DEPRECATED
     */
    template<typename Archive, bool onDeserialize>
    services::Status serialImpl(Archive *arch)
    {
        return daal::algorithms::Result::serialImpl<Archive, onDeserialize>(arch);
    }
};
typedef services::SharedPtr<Result> ResultPtr;

} // namespace interface1
using interface1::Input;
using interface1::Result;
using interface1::ResultPtr;

} // namespace forward
/** @} */
} // namespace lcn
} // namespace layers
} // namespace neural_networks
} // namespace algorithms
} // namespace daal

#endif