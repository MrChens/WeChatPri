//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "CBCentralManagerDelegate-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"

@class CBCentralManager, CLLocationManager, NSArray, NSMutableDictionary, NSString;

@interface WAJSContextPlugin_Beacon : WAJSContextPluginBase <CLLocationManagerDelegate, CBCentralManagerDelegate>
{
    NSArray *m_uuids;
    CLLocationManager *m_locationMgr;
    CBCentralManager *m_bleMgr;
    NSMutableDictionary *m_beacons;
    long long m_bleState;
    _Bool m_isInStartWorkFlow;
    _Bool m_isRanging;
}

- (void).cxx_destruct;
- (id)genBeaconKey:(id)arg1;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)notifyServiceBeaconState;
- (id)getCurrentBeacons;
- (int)stopRanging;
- (void)notifyStartRangingFailed:(id)arg1;
- (void)startRanging;
- (int)starMoritoring:(id)arg1;
- (int)systemSupportBeacon;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

