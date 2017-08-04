//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LSTargetGenerator;

@interface LSMatchTypeConfig : NSObject
{
    unsigned int _matchType;
    unsigned int _matchSubType;
    LSTargetGenerator *_targetGenerator;
    LSTargetGenerator *_nsMatchDescGenerator;
    LSTargetGenerator *_nsShortPYGenerator;
    LSTargetGenerator *_nsFullPYGenerator;
}

+ (id)matchType:(unsigned int)arg1 subType:(unsigned int)arg2 target:(id)arg3 desc:(id)arg4 shortPY:(id)arg5 fullPY:(id)arg6;
+ (id)matchType:(unsigned int)arg1 subType:(unsigned int)arg2 target:(id)arg3 desc:(id)arg4;
@property(retain, nonatomic) LSTargetGenerator *nsFullPYGenerator; // @synthesize nsFullPYGenerator=_nsFullPYGenerator;
@property(retain, nonatomic) LSTargetGenerator *nsShortPYGenerator; // @synthesize nsShortPYGenerator=_nsShortPYGenerator;
@property(retain, nonatomic) LSTargetGenerator *nsMatchDescGenerator; // @synthesize nsMatchDescGenerator=_nsMatchDescGenerator;
@property(retain, nonatomic) LSTargetGenerator *targetGenerator; // @synthesize targetGenerator=_targetGenerator;
@property(nonatomic) unsigned int matchSubType; // @synthesize matchSubType=_matchSubType;
@property(nonatomic) unsigned int matchType; // @synthesize matchType=_matchType;
- (void).cxx_destruct;
- (_Bool)applyRule:(int)arg1;

@end

