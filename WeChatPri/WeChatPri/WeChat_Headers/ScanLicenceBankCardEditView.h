//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSMutableArray, NSString, UITextField;

@interface ScanLicenceBankCardEditView : UIView <UITextFieldDelegate>
{
    NSMutableArray *_arrTextField;
    UITextField *bankSequenceField;
}

- (void).cxx_destruct;
- (id)getFullBankNumStr;
- (void)textFieldDidBeginEditing:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andCodeNum:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

