//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EmoticonBoardPageWrap, NSArray;

@interface EmoticonBoardPageSectionInfo : NSObject
{
    unsigned long long _sectionNum;
    unsigned long long _lastOffsetPageValue;
    EmoticonBoardPageWrap *_pageWrap;
    unsigned long long _rowCount;
    NSArray *_qqEmojiPageArray;
}

@property(retain, nonatomic) NSArray *qqEmojiPageArray; // @synthesize qqEmojiPageArray=_qqEmojiPageArray;
@property(nonatomic) unsigned long long rowCount; // @synthesize rowCount=_rowCount;
@property(retain, nonatomic) EmoticonBoardPageWrap *pageWrap; // @synthesize pageWrap=_pageWrap;
@property(nonatomic) unsigned long long lastOffsetPageValue; // @synthesize lastOffsetPageValue=_lastOffsetPageValue;
@property(nonatomic) unsigned long long sectionNum; // @synthesize sectionNum=_sectionNum;
- (void).cxx_destruct;

@end

