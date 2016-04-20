/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:51 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NRDevice, NSCache;

@interface PBBridgeWatchAttributeController : NSObject {

	int _material;
	int _hardwareBehavior;
	unsigned long long _edition;
	unsigned long long _internalSize;
	NRDevice* _device;
	NSCache* _stringCache;

}

@property (nonatomic,readonly) unsigned long long edition;                   //@synthesize edition=_edition - In the implementation block
@property (nonatomic,readonly) int material;                                 //@synthesize material=_material - In the implementation block
@property (nonatomic,readonly) unsigned long long internalSize;              //@synthesize internalSize=_internalSize - In the implementation block
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) int hardwareBehavior;                         //@synthesize hardwareBehavior=_hardwareBehavior - In the implementation block
@property (nonatomic,retain) NRDevice * device;                              //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSCache * stringCache;                          //@synthesize stringCache=_stringCache - In the implementation block
+(id)sharedDeviceController;
+(id)materialDescription:(int)arg1 ;
+(id)sizeDescription:(unsigned long long)arg1 ;
+(id)editionDescription:(unsigned long long)arg1 ;
+(id)hwBehaviorDescription:(int)arg1 ;
+(id)materialKeyColorForMaterial:(int)arg1 ;
+(id)resourceString:(id)arg1 material:(int)arg2 size:(unsigned long long)arg3 forAttributes:(unsigned long long)arg4 ;
+(BOOL)testZeusMaterial;
-(id)resourceString:(id)arg1 forAttributes:(unsigned long long)arg2 ;
-(unsigned long long)size;
-(id)init;
-(NRDevice *)device;
-(unsigned long long)edition;
-(void)setMaterial:(int)arg1 ;
-(int)material;
-(id)getGestaltDmin;
-(void)_populateMaterialDetailsWithDMinProperities:(id)arg1 ;
-(id)attributesDescription;
-(id)materialKeyColor;
-(void)setInternalSize:(unsigned long long)arg1 ;
-(unsigned long long)internalSize;
-(int)hardwareBehavior;
-(NSCache *)stringCache;
-(void)setStringCache:(NSCache *)arg1 ;
-(void)setDevice:(NRDevice *)arg1 ;
@end

