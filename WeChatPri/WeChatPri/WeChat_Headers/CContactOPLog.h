//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CContactOPLog : NSObject
{
    NSMutableDictionary *m_dicSkipContacts;
}

+ (unsigned int)start_ModifyContact:(id)arg1;
+ (id)getModifyContactData:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3;
- (void).cxx_destruct;
- (_Bool)add_ModifyNotifyStatus:(id)arg1 withStatus:(unsigned int)arg2 NeedSync:(_Bool)arg3;
- (_Bool)add_DeleteChatMsg:(id)arg1 sync:(_Bool)arg2;
- (_Bool)add_DeleteChatContact:(id)arg1 sync:(_Bool)arg2;
- (_Bool)add_ModifyContact:(id)arg1 delScene:(unsigned int)arg2 sync:(_Bool)arg3;
- (_Bool)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 sync:(_Bool)arg3;
- (_Bool)add_ModifyContact:(id)arg1 sync:(_Bool)arg2;
- (_Bool)add_ModifyContact:(id)arg1 addScene:(unsigned int)arg2 delScene:(unsigned int)arg3 sync:(_Bool)arg4;
- (_Bool)isSkipContact:(id)arg1;
- (void)add_SkipContact:(id)arg1;
- (id)init;

@end

