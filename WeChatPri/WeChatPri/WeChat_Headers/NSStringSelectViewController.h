//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMTableViewInfo;

@interface NSStringSelectViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    id m_targetOnSelect;
    SEL m_selOnSelect;
}

- (void).cxx_destruct;
- (void)OnSelectCell:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setFooterTip:(id)arg1 section:(unsigned int)arg2;
- (void)setOnSelectTarget:(id)arg1 sel:(SEL)arg2;
- (id)initWithArray:(id)arg1 selected:(id)arg2;
- (void)updateTableViewWithArray:(id)arg1 selected:(id)arg2;
- (void)initView;

@end

