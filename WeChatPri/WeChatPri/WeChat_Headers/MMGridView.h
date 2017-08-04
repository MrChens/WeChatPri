//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMGridViewCellDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MMGridViewCell, NSArray, NSMutableSet, NSString, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UIScrollView, UITapGestureRecognizer, UIView;
@protocol MMGridViewActionDelegate, MMGridViewDataSource, MMGridViewLayoutStrategy, MMGridViewSortingDelegate, MMGridViewTransformationDelegate;

@interface MMGridView : MMUIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate, MMGridViewCellDelegate>
{
    UIPanGestureRecognizer *_sortingPanGesture;
    UILongPressGestureRecognizer *_longPressGesture;
    UIPinchGestureRecognizer *_pinchGesture;
    UITapGestureRecognizer *_tapGesture;
    UIRotationGestureRecognizer *_rotationGesture;
    UIPanGestureRecognizer *_panGesture;
    long long _numberTotalItems;
    struct CGSize _itemSize;
    NSMutableSet *_reusableCells;
    MMGridViewCell *_sortMovingItem;
    long long _sortFuturePosition;
    _Bool _autoScrollActive;
    struct CGPoint _minPossibleContentOffset;
    struct CGPoint _maxPossibleContentOffset;
    MMGridViewCell *_transformingItem;
    double _lastRotation;
    double _lastScale;
    _Bool _inFullSizeMode;
    _Bool _inTransformingState;
    _Bool _rotationActive;
    int m_moveState;
    id <MMGridViewDataSource> m_dataSource;
    id <MMGridViewActionDelegate> m_actionDelegate;
    id <MMGridViewSortingDelegate> m_sortingDelegate;
    id <MMGridViewTransformationDelegate> m_transformDelegate;
    id <MMGridViewLayoutStrategy> m_layoutStrategy;
    UIView *_mainSuperView;
    long long _itemSpacingH;
    long long _itemSpacingV;
    _Bool _centerGridH;
    struct UIEdgeInsets _minEdgeInsets;
    _Bool _editing;
    _Bool _itemsSubviewsCacheIsValid;
    long long _firstPositionLoaded;
    long long _lastPositionLoaded;
    double cellResponseOffset;
    _Bool showFullSizeViewWithAlphaWhenTransforming;
    _Bool enableEditOnLongPress;
    _Bool disableEditOnEmptySpaceTap;
    int _style;
    double minimumPressDuration;
    NSArray *itemSubviewsCache;
}

@property(nonatomic) double cellResponseOffset; // @synthesize cellResponseOffset;
@property int m_moveState; // @synthesize m_moveState;
@property(nonatomic) long long lastPositionLoaded; // @synthesize lastPositionLoaded=_lastPositionLoaded;
@property(nonatomic) long long firstPositionLoaded; // @synthesize firstPositionLoaded=_firstPositionLoaded;
@property(retain, nonatomic) NSArray *itemSubviewsCache; // @synthesize itemSubviewsCache;
@property(readonly, nonatomic) _Bool itemsSubviewsCacheIsValid; // @synthesize itemsSubviewsCacheIsValid=_itemsSubviewsCacheIsValid;
@property(nonatomic) _Bool disableEditOnEmptySpaceTap; // @synthesize disableEditOnEmptySpaceTap;
@property(nonatomic) _Bool enableEditOnLongPress; // @synthesize enableEditOnLongPress;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool showFullSizeViewWithAlphaWhenTransforming; // @synthesize showFullSizeViewWithAlphaWhenTransforming;
@property(nonatomic) struct UIEdgeInsets minEdgeInsets; // @synthesize minEdgeInsets=_minEdgeInsets;
@property(nonatomic) _Bool centerGridH; // @synthesize centerGridH=_centerGridH;
@property(nonatomic) int style; // @synthesize style=_style;
@property(nonatomic) long long itemSpacingV; // @synthesize itemSpacingV=_itemSpacingV;
@property(nonatomic) long long itemSpacingH; // @synthesize itemSpacingH=_itemSpacingH;
@property(nonatomic) __weak UIView *mainSuperView; // @synthesize mainSuperView=_mainSuperView;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIScrollView *scrollView;
- (void)swapObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 withAnimation:(int)arg3;
- (void)swapObjectAtIndex:(long long)arg1 withObjectAtIndex:(long long)arg2 animated:(_Bool)arg3;
- (void)removeObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)removeObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)deleteCell:(long long)arg1;
- (void)onDeleteCell:(long long)arg1;
- (void)insertObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)insertObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToObjectAtIndex:(long long)arg1 atScrollPosition:(int)arg2 animated:(_Bool)arg3;
- (void)reloadObjectAtIndex:(long long)arg1 withAnimation:(int)arg2;
- (void)reloadObjectAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)reloadData;
- (void)updateBasicSettings;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)dequeueReusableCell;
- (void)queueReusableCell:(id)arg1;
- (void)cleanupUnseenItems;
- (void)loadRequiredItems;
- (struct CGRect)rectForPoint:(struct CGPoint)arg1 inPaggingMode:(_Bool)arg2;
- (void)relayoutItemsAnimated:(_Bool)arg1;
- (void)relayoutItemsAnimated:(_Bool)arg1 duration:(double)arg2;
- (void)recomputeSizeAnimated:(_Bool)arg1;
- (long long)positionForItemSubview:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)itemSubviews;
- (id)itemSubViewForPosition:(long long)arg1;
- (void)setSubviewsCacheAsInvalid;
- (void)tapGestureUpdated:(id)arg1;
- (void)transformingGestureDidFinish;
- (_Bool)isInTransformingState;
- (void)transformingGestureDidBeginWithGesture:(id)arg1;
- (void)rotationGestureUpdated:(id)arg1;
- (void)pinchGestureUpdated:(id)arg1;
- (void)panGestureUpdated:(id)arg1;
- (void)sortingMoveDidContinueToPoint:(struct CGPoint)arg1;
- (void)sortingMoveDidStopAtPoint:(struct CGPoint)arg1;
- (void)sortingMoveDidStartAtPoint:(struct CGPoint)arg1;
- (void)sortingAutoScrollMovementCheck;
- (void)sortingPanGestureUpdated:(id)arg1;
- (_Bool)shouldActAtPoint:(struct CGPoint)arg1;
- (void)longPressGestureUpdated:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)contentOffset:(struct CGPoint)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) double minimumPressDuration; // @synthesize minimumPressDuration;
- (void)setLayoutStrategy:(id)arg1;
- (void)setTransformDelegate:(id)arg1;
- (void)setActionDelegate:(id)arg1;
- (void)setSortingDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)receivedWillRotateNotification:(id)arg1;
- (void)receivedMemoryWarningNotification:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSubviewsWithAnimation:(int)arg1;
- (void)applyWithoutAnimation:(CDUnknownBlockType)arg1;
- (id)getRotationGestureRecognizer;
- (id)getTapGestureRecognizer;
- (id)getPinchGestureRecognizer;
- (id)getLongPressGestureRecognizer;
- (id)getSortPanGestureRecognizer;
- (id)getPanGestureRecognizer;
- (id)getScrollViewPanGestureRecognizer;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)gotoPage:(unsigned int)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

