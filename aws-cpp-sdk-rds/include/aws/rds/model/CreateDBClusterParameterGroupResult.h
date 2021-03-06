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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DBClusterParameterGroup.h>
#include <aws/rds/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{
  class AWS_RDS_API CreateDBClusterParameterGroupResult
  {
  public:
    CreateDBClusterParameterGroupResult();
    CreateDBClusterParameterGroupResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateDBClusterParameterGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    
    inline const DBClusterParameterGroup& GetDBClusterParameterGroup() const{ return m_dBClusterParameterGroup; }

    
    inline void SetDBClusterParameterGroup(const DBClusterParameterGroup& value) { m_dBClusterParameterGroup = value; }

    
    inline void SetDBClusterParameterGroup(DBClusterParameterGroup&& value) { m_dBClusterParameterGroup = std::move(value); }

    
    inline CreateDBClusterParameterGroupResult& WithDBClusterParameterGroup(const DBClusterParameterGroup& value) { SetDBClusterParameterGroup(value); return *this;}

    
    inline CreateDBClusterParameterGroupResult& WithDBClusterParameterGroup(DBClusterParameterGroup&& value) { SetDBClusterParameterGroup(std::move(value)); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDBClusterParameterGroupResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDBClusterParameterGroupResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:
    DBClusterParameterGroup m_dBClusterParameterGroup;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws