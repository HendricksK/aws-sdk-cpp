﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/PinpointRequest.h>
#include <aws/pinpoint/model/APNSChannelRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Pinpoint
{
namespace Model
{

  /**
   */
  class AWS_PINPOINT_API UpdateApnsChannelRequest : public PinpointRequest
  {
  public:
    UpdateApnsChannelRequest();
    Aws::String SerializePayload() const override;


    
    inline const APNSChannelRequest& GetAPNSChannelRequest() const{ return m_aPNSChannelRequest; }

    
    inline void SetAPNSChannelRequest(const APNSChannelRequest& value) { m_aPNSChannelRequestHasBeenSet = true; m_aPNSChannelRequest = value; }

    
    inline void SetAPNSChannelRequest(APNSChannelRequest&& value) { m_aPNSChannelRequestHasBeenSet = true; m_aPNSChannelRequest = std::move(value); }

    
    inline UpdateApnsChannelRequest& WithAPNSChannelRequest(const APNSChannelRequest& value) { SetAPNSChannelRequest(value); return *this;}

    
    inline UpdateApnsChannelRequest& WithAPNSChannelRequest(APNSChannelRequest&& value) { SetAPNSChannelRequest(std::move(value)); return *this;}


    
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    
    inline UpdateApnsChannelRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    
    inline UpdateApnsChannelRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    
    inline UpdateApnsChannelRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}

  private:

    APNSChannelRequest m_aPNSChannelRequest;
    bool m_aPNSChannelRequestHasBeenSet;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
