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

#include <aws/ec2/model/ModifyVpcEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyVpcEndpointRequest::ModifyVpcEndpointRequest() : 
    m_addRouteTableIdsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_policyDocumentHasBeenSet(false),
    m_removeRouteTableIdsHasBeenSet(false),
    m_resetPolicy(false),
    m_resetPolicyHasBeenSet(false),
    m_vpcEndpointIdHasBeenSet(false)
{
}

Aws::String ModifyVpcEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyVpcEndpoint&";
  if(m_addRouteTableIdsHasBeenSet)
  {
    unsigned addRouteTableIdsCount = 1;
    for(auto& item : m_addRouteTableIds)
    {
      ss << "AddRouteTableId." << addRouteTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      addRouteTableIdsCount++;
    }
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_policyDocumentHasBeenSet)
  {
    ss << "PolicyDocument=" << StringUtils::URLEncode(m_policyDocument.c_str()) << "&";
  }

  if(m_removeRouteTableIdsHasBeenSet)
  {
    unsigned removeRouteTableIdsCount = 1;
    for(auto& item : m_removeRouteTableIds)
    {
      ss << "RemoveRouteTableId." << removeRouteTableIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      removeRouteTableIdsCount++;
    }
  }

  if(m_resetPolicyHasBeenSet)
  {
    ss << "ResetPolicy=" << std::boolalpha << m_resetPolicy << "&";
  }

  if(m_vpcEndpointIdHasBeenSet)
  {
    ss << "VpcEndpointId=" << StringUtils::URLEncode(m_vpcEndpointId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyVpcEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
