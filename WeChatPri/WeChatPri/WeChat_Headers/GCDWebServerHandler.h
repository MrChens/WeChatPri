//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GCDWebServerHandler : NSObject
{
    CDUnknownBlockType _matchBlock;
    CDUnknownBlockType _asyncProcessBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType asyncProcessBlock; // @synthesize asyncProcessBlock=_asyncProcessBlock;
@property(readonly, nonatomic) CDUnknownBlockType matchBlock; // @synthesize matchBlock=_matchBlock;
- (void).cxx_destruct;
- (id)initWithMatchBlock:(CDUnknownBlockType)arg1 asyncProcessBlock:(CDUnknownBlockType)arg2;

@end
