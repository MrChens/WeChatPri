//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MMExtensionDictionary : NSObject
{
    NSMutableDictionary *m_dic;
    _Bool m_needCleanUp;
}

- (void).cxx_destruct;
- (void)cleanUp;
- (id)getKeyExtensionList:(id)arg1;
- (_Bool)unregisterKeyExtension:(id)arg1;
- (_Bool)unregisterExtension:(id)arg1 forKey:(id)arg2;
- (_Bool)registerExtension:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

