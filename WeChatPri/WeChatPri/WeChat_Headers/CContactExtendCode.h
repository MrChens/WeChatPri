//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CContactExtendCode : NSObject
{
}

+ (void)decodeKeyContactFieldPurePB:(char *)arg1 size:(unsigned int)arg2 contact:(id)arg3;
+ (void)decodeKeyContactField:(struct XmlReaderNode_t *)arg1 contact:(id)arg2;
+ (void)codeKeyContactFieldPB:(struct CFastStr *)arg1 contact:(id)arg2;
+ (void)decodeContactField:(struct XmlReaderNode_t *)arg1 contact:(id)arg2;
+ (void)codeContactField:(struct CFastStr *)arg1 contact:(id)arg2;
+ (_Bool)decodeKeyExtentField:(id)arg1 contact:(id)arg2;
+ (id)codeKeyExtentField:(id)arg1;
+ (_Bool)decodeExtentField_New:(id)arg1 contact:(id)arg2;
+ (_Bool)decodeExtentField:(id)arg1 contact:(id)arg2;
+ (id)codeExtentField:(id)arg1;
+ (id)decodeToBrandInfoFromXml:(id)arg1;
+ (id)decodeToBrandInfoFromXmlNode:(struct XmlReaderNode_t *)arg1;
+ (id)decodeToBrandInfo:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
+ (unsigned int)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (unsigned long long)decodeToInteger64:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToChatRoomDetail:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 ChatRoomDetail:(id)arg3;
+ (id)decodeToPhoneList:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 PhoneList:(id)arg3;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 BrandList:(id)arg3;
+ (id)encodeToXmlFromBrandInfo:(id)arg1;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned int)arg3;
+ (_Bool)code:(struct CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;

@end

