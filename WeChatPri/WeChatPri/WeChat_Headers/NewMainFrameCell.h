//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

#import "IMainFrameCellExt-Protocol.h"

@class MainFrameCellData, MainFrameItemView, NSString, UIImage, UIImageView;
@protocol NewMainFrameCellDelegate;

@interface NewMainFrameCell : MMMultiMenuTableViewCell <IMainFrameCellExt>
{
    MainFrameItemView *m_itemView;
    UIImageView *m_backGroundViewOfCell;
    UIImage *m_cellBkgImageWithTop;
    UIImage *m_cellBkgImage;
    MainFrameCellData *m_cellData;
    MainFrameCellData *m_oldCellData;
    id <NewMainFrameCellDelegate> m_delegate;
}

@property(retain, nonatomic) MainFrameCellData *m_oldCellData; // @synthesize m_oldCellData;
@property(nonatomic) __weak id <NewMainFrameCellDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MainFrameCellData *m_cellData; // @synthesize m_cellData;
- (void).cxx_destruct;
- (void)updateCellBackground:(id)arg1;
- (void)updateCellTime;
- (void)updateCellAccessibilityLabel;
- (void)updateCellContent:(id)arg1 withContact:(id)arg2;
- (void)updateContentView:(id)arg1 tableViewFrame:(struct CGRect)arg2 isSearching:(_Bool)arg3 isSearchTableView:(_Bool)arg4 searchBarText:(id)arg5;
- (void)updateMoreMenu:(id)arg1;
- (void)onDelete:(id)arg1;
- (void)onSetUnread:(id)arg1;
- (_Bool)isSessionSetUnreadable:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

