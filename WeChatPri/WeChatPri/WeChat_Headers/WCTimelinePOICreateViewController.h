//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ICreatePOIMgrExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"
#import "MMTableViewInfoDelegate-Protocol.h"
#import "POICategoryDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCAddressLogicMgrExt-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class CLLocation, MMTableViewInfo, MMUIButton, NSMutableArray, NSString, WCBaseTextFieldItem, WCPOIAddressPickerItem;
@protocol POICreateDelegate;

@interface WCTimelinePOICreateViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, ICreatePOIMgrExt, POICategoryDelegate, WCAddressLogicMgrExt, ILocationMgrExt, UIAlertViewDelegate>
{
    NSString *_poiName;
    CLLocation *_location;
    id <POICreateDelegate> _delegate;
    MMTableViewInfo *_tableViewInfo;
    NSMutableArray *_infoItems;
    WCBaseTextFieldItem *_poiNameTextFieldItem;
    WCPOIAddressPickerItem *_districtPickerItem;
    WCBaseTextFieldItem *_addressTextFieldItem;
    WCBaseTextFieldItem *_categoryPickerItem;
    WCBaseTextFieldItem *_telephoneTextFieldItem;
    MMUIButton *_seeMoreButton;
    unsigned long long _geoTag;
    _Bool _lockSelection;
    _Bool _isLiteView;
    unsigned int _createPOICellIndex;
    NSString *_currentSearchID;
}

@property(retain, nonatomic) NSString *currentSearchID; // @synthesize currentSearchID=_currentSearchID;
@property(nonatomic) unsigned int createPOICellIndex; // @synthesize createPOICellIndex=_createPOICellIndex;
- (void).cxx_destruct;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long long)arg2;
- (void)OnGetGetAllAddressStageData:(id)arg1 Error:(id)arg2;
- (void)onSelectedCategory:(id)arg1;
- (void)OnCreatePOI:(id)arg1 ID:(id)arg2 Error:(int)arg3;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)validateData;
- (void)onDone;
- (void)onReturn;
- (void)onSeeMore;
- (void)hideKeyboard;
- (void)selectAddress:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)initDistrict;
- (void)initOptionalData;
- (void)initRequiredData;
- (void)initTableView;
- (void)initView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithPOIName:(id)arg1 Location:(id)arg2 Delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

