//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WACommentScoreViewModel : MMObject
{
    _Bool _canEdit;
    _Bool _showWhenZero;
    _Bool _bPostScene;
    unsigned int _score;
    unsigned int _itemCount;
    double _itemSpacing;
    struct CGSize _itemSize;
}

@property(nonatomic) _Bool bPostScene; // @synthesize bPostScene=_bPostScene;
@property(nonatomic) _Bool showWhenZero; // @synthesize showWhenZero=_showWhenZero;
@property(nonatomic) unsigned int itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) double itemSpacing; // @synthesize itemSpacing=_itemSpacing;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(nonatomic) unsigned int score; // @synthesize score=_score;
- (struct CGSize)getScoreViewSize;

@end

