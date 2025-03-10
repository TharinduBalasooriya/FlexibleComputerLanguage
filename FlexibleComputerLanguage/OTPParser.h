//
//  OTPParser.h
//  FlexibleComputerLanguage
//
//  Created by Murtaza Anverali on 7/5/18.
//  Copyright © 2018 Dileepa Jayathilaka. All rights reserved.
//

//#include "json.hpp"
#include "CommonIncludes.h"
#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

// using namespace rapidjson;

class OTPParser
{
  public:
    static void createTDTree(rapidjson::Value& j, Node *parent);
    static Node *OTPJSONToNodeTree(std::string otpsString);
};
