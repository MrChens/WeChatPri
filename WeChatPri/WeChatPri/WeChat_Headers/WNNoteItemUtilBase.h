//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WNNoteRichEditDelegate;

@interface WNNoteItemUtilBase : NSObject
{
    id <WNNoteRichEditDelegate> _delegate;
    int _type;
}

@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <WNNoteRichEditDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)insertItem:(id)arg1 isUpdate:(_Bool)arg2 isConfigData:(_Bool)arg3;
- (id)getIconSelectedName;
- (id)getIconHLName;
- (id)getIconName;
- (id)getTitle;
- (void)onLongClickItem:(id)arg1;
- (void)onClickItem:(id)arg1;
- (void)onAddItemBegin:(id)arg1;

@end

