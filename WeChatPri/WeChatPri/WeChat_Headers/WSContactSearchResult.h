//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface WSContactSearchResult : NSObject
{
    unsigned int _sugType;
    NSString *_keyword;
    NSMutableArray *_arrResult;
    NSMutableDictionary *_dicSearchMatchTip;
    NSString *_sugTitle;
}

@property(nonatomic) unsigned int sugType; // @synthesize sugType=_sugType;
@property(retain, nonatomic) NSString *sugTitle; // @synthesize sugTitle=_sugTitle;
@property(retain, nonatomic) NSMutableDictionary *dicSearchMatchTip; // @synthesize dicSearchMatchTip=_dicSearchMatchTip;
@property(retain, nonatomic) NSMutableArray *arrResult; // @synthesize arrResult=_arrResult;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void).cxx_destruct;
- (id)markHighlightString:(id)arg1 arrKeywords:(id)arg2;
- (id)toJSON;

@end

