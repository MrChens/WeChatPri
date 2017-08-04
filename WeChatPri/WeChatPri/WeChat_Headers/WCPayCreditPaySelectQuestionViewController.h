//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSMutableArray, NSString;
@protocol WCPayCreditPaySelectQuestionViewControllerDelegate;

@interface WCPayCreditPaySelectQuestionViewController : WCPayBaseViewController
{
    id <WCPayCreditPaySelectQuestionViewControllerDelegate> m_delegate;
    long long m_uiLastSelectedQuestionID;
    NSMutableArray *m_aryQuestion;
    NSString *m_nsLastSelectedQuestionID;
}

@property(retain, nonatomic) NSString *m_nsLastSelectedQuestionID; // @synthesize m_nsLastSelectedQuestionID;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)clickCell:(id)arg1 indexPath:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)initTableView;
- (double)getQuestionItemHeight:(id)arg1;
- (void)onBack;
- (void)setDelegate:(id)arg1;
- (void)initNavigationBar;
- (void)dealloc;
- (id)initWithQuestionAry:(id)arg1 withLastSelectedQuestionID:(id)arg2;

@end

