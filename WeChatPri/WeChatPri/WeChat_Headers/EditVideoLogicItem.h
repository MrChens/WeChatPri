//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "EditVideoInitialViewDelegate-Protocol.h"

@class AVAsset, EditVideoAttr, EditVideoInitialView, MMAsset, NSArray, NSString, UIImage;
@protocol EditVideoLogicItemDelegate;

@interface EditVideoLogicItem : MMObject <EditVideoInitialViewDelegate>
{
    EditVideoAttr *_videoAttr;
    UIImage *_thumbImage;
    MMAsset *_asset;
    AVAsset *_avAsset;
    EditVideoInitialView *_editVideoInitialView;
    NSArray *_drawLayers;
    CDStruct_1b6d18a9 _videoDuration;
    CDStruct_e83c9415 _editedTimeRange;
    CDStruct_e83c9415 _originalTimeRange;
    id <EditVideoLogicItemDelegate> _delegate;
    unsigned long long _entranceType;
}

@property(nonatomic) unsigned long long entranceType; // @synthesize entranceType=_entranceType;
@property(nonatomic) __weak id <EditVideoLogicItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isExceedTimelineTimeLimit;
- (float)getOutputTime;
- (id)getAssetUrl;
- (id)getThumbImage;
- (struct CGSize)getImageRatioSize;
- (id)getVideoAttr;
- (CDStruct_e83c9415)getEditedVideoTimeRange;
- (void)onClickEditVideoDoneButton;
- (void)onClickEditVideoCancelButton;
- (void)onCropTimeChange:(CDStruct_e83c9415)arg1;
- (void)onSeekTime:(double)arg1;
- (void)onCropCancel;
- (void)onCropDone:(CDStruct_e83c9415)arg1;
- (void)onEnterForeground:(id)arg1;
- (void)onResigned:(id)arg1;
- (void)cancelLoopPlay;
- (void)loopPlay;
- (void)loadDurationComplete:(CDUnknownBlockType)arg1;
- (void)showEditVideoViewOn:(id)arg1;
- (void)getEditedResult:(CDUnknownBlockType)arg1;
- (void)resetEditVideoAttr;
- (void)onEditVideoFinish;
- (void)dealloc;
- (void)onEditVideoAtPath:(id)arg1 andThumbImage:(id)arg2 onView:(id)arg3;
- (void)onEditVideo:(id)arg1 onView:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

