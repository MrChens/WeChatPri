//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface UploadElement : NSObject
{
    NSMutableDictionary *_m_fileInfos;
    NSString *_m_commextrainfo;
    NSString *_m_userName;
}

@property(retain, nonatomic) NSString *m_userName; // @synthesize m_userName=_m_userName;
@property(retain, nonatomic) NSString *m_commextrainfo; // @synthesize m_commextrainfo=_m_commextrainfo;
@property(retain, nonatomic) NSMutableDictionary *m_fileInfos; // @synthesize m_fileInfos=_m_fileInfos;
- (void).cxx_destruct;
- (_Bool)addFile:(id)arg1 startPos:(unsigned long long)arg2 endPos:(unsigned long long)arg3;
- (_Bool)addFile:(id)arg1 size:(unsigned long long)arg2;
- (id)init;

@end

