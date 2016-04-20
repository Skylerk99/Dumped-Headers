/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:21 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIAbstractEntityProviderViewElement.h>
#import <libobjc.A.dylib/SKUIEntityProviding.h>

@class RadioModel, NSArray, NSMapTable, NSString;

@interface SKUIRadioEntityProviderViewElement : SKUIAbstractEntityProviderViewElement <SKUIEntityProviding> {

	BOOL _hasValidStations;
	long long _countLimit;
	long long _radioEntityProviderType;
	RadioModel* _radioModel;
	NSArray* _stations;
	NSMapTable* _stationToStationEntityValueProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(unsigned long long)numberOfSections;
-(id)entityValueProviderAtIndexPath:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(unsigned long long)numberOfEntitiesInSection:(unsigned long long)arg1 ;
-(id)indexBarEntryEntityValueProviderAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfIndexBarEntries;
-(unsigned long long)sectionForSectionIndexBarEntryAtIndex:(unsigned long long)arg1 ;
-(id)sectionEntityValueProviderAtIndex:(long long)arg1 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(void)_invalidateWithContext:(id)arg1 ;
-(id)_stations;
-(id)_entityValueProviderForStation:(id)arg1 ;
@end

