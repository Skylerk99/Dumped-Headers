/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOAddress, NSMutableArray, GEOLatLng, GEOMapRegion, NSString, GEOStructuredAddress, GEOTimezone, GEOBusiness;

@interface GEOPlace : PBCodable <GEOURLSerializable, NSCopying> {

	double _area;
	long long _geoId;
	long long _uID;
	GEOAddress* _address;
	int _addressGeocodeAccuracy;
	NSMutableArray* _business;
	GEOLatLng* _center;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _entryPoints;
	int _localSearchProviderID;
	GEOMapRegion* _mapRegion;
	NSString* _name;
	GEOAddress* _phoneticAddress;
	NSString* _phoneticLocaleIdentifier;
	NSString* _phoneticName;
	int _referenceFrame;
	NSMutableArray* _roadAccessPoints;
	NSString* _spokenAddress;
	NSString* _spokenName;
	GEOStructuredAddress* _spokenStructuredAddress;
	GEOTimezone* _timezone;
	int _type;
	BOOL _isDisputed;
	SCD_Struct_GE65 _has;

}

@property (nonatomic,readonly) GEOBusiness * firstBusiness; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasPhoneticLocaleIdentifier; 
@property (nonatomic,retain) NSString * phoneticLocaleIdentifier; 
@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL hasUID; 
@property (assign,nonatomic) long long uID;                                               //@synthesize uID=_uID - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasMapRegion; 
@property (nonatomic,retain) GEOMapRegion * mapRegion;                                    //@synthesize mapRegion=_mapRegion - In the implementation block
@property (nonatomic,readonly) BOOL hasAddress; 
@property (nonatomic,retain) GEOAddress * address;                                        //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                                     //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticAddress; 
@property (nonatomic,retain) GEOAddress * phoneticAddress;                                //@synthesize phoneticAddress=_phoneticAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasCenter; 
@property (nonatomic,retain) GEOLatLng * center;                                          //@synthesize center=_center - In the implementation block
@property (nonatomic,retain) NSMutableArray * business;                                   //@synthesize business=_business - In the implementation block
@property (assign,nonatomic) BOOL hasAddressGeocodeAccuracy; 
@property (assign,nonatomic) int addressGeocodeAccuracy;                                  //@synthesize addressGeocodeAccuracy=_addressGeocodeAccuracy - In the implementation block
@property (nonatomic,retain) NSMutableArray * entryPoints;                                //@synthesize entryPoints=_entryPoints - In the implementation block
@property (assign,nonatomic) BOOL hasIsDisputed; 
@property (assign,nonatomic) BOOL isDisputed;                                             //@synthesize isDisputed=_isDisputed - In the implementation block
@property (assign,nonatomic) BOOL hasLocalSearchProviderID; 
@property (assign,nonatomic) int localSearchProviderID;                                   //@synthesize localSearchProviderID=_localSearchProviderID - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenName; 
@property (nonatomic,retain) NSString * spokenName;                                       //@synthesize spokenName=_spokenName - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenAddress; 
@property (nonatomic,retain) NSString * spokenAddress;                                    //@synthesize spokenAddress=_spokenAddress - In the implementation block
@property (assign,nonatomic) BOOL hasArea; 
@property (assign,nonatomic) double area;                                                 //@synthesize area=_area - In the implementation block
@property (nonatomic,readonly) BOOL hasSpokenStructuredAddress; 
@property (nonatomic,retain) GEOStructuredAddress * spokenStructuredAddress;              //@synthesize spokenStructuredAddress=_spokenStructuredAddress - In the implementation block
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) GEOTimezone * timezone;                                      //@synthesize timezone=_timezone - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                             //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * roadAccessPoints;                           //@synthesize roadAccessPoints=_roadAccessPoints - In the implementation block
@property (assign,nonatomic) BOOL hasGeoId; 
@property (assign,nonatomic) long long geoId;                                             //@synthesize geoId=_geoId - In the implementation block
+(id)placeForPlaceData:(id)arg1 ;
+(id)_urlToShowPlaces:(id)arg1 options:(id)arg2 ;
+(id)_urlToShowCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3 ;
+(id)_urlForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 options:(id)arg3 ;
+(id)_placesFromPresentAction:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_urlForAction:(id)arg1 rison:(id)arg2 ;
+(id)_placesFromDirectionsAction:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_placesFromURL:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_placesFromShowAction:(id)arg1 hasCurrentLocation:(BOOL*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4 ;
+(id)_urlRepresentationForCurrentLocation;
+(id)_urlToShowCurrentLocationWithOptions:(id)arg1 ;
+(id)_urlToShowURLRepresentations:(id)arg1 options:(id)arg2 ;
-(id)initWithCLLocation:(id)arg1 ;
-(id)clRegion;
-(id)initWithPlacemark:(id)arg1 ;
-(id)clLocation;
-(id)geoMapItem;
-(id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3 ;
-(id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 muid:(unsigned long long)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned)arg8 normalizedUserRatingScore:(float)arg9 ;
-(SCD_Struct_GE16)coordinate;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(id)addressDictionary;
-(id)bestName;
-(id)initWithLatitude:(double)arg1 longitude:(double)arg2 addressDictionary:(id)arg3 ;
-(GEOBusiness *)firstBusiness;
-(id)arrivalMapRegionForTransportType:(int)arg1 ;
-(id)arrivalMapRegion;
-(void)setNSTimeZone:(id)arg1 ;
-(double)radialDistance;
-(void)setCenterCoordinate:(SCD_Struct_GE16)arg1 ;
-(id)initWithPlaceInfo:(id)arg1 entity:(id)arg2 address:(id)arg3 bounds:(id)arg4 roadAccessInfo:(id)arg5 ;
-(id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg1 ;
-(id)urlRepresentation;
-(id)_urlForDirectionsFromPlace:(id)arg1 options:(id)arg2 ;
-(id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg1 ;
-(id)_urlToShowWithOptions:(id)arg1 ;
-(id)_urlForDirectionsToPlace:(id)arg1 options:(id)arg2 ;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(BOOL)hasReferenceFrame;
-(void)setPhoneticLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)hasPhoneticLocaleIdentifier;
-(NSString *)phoneticLocaleIdentifier;
-(GEOAddress *)address;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(GEOLatLng *)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCenter:(GEOLatLng *)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasCenter;
-(NSMutableArray *)roadAccessPoints;
-(void)clearRoadAccessPoints;
-(void)setRoadAccessPoints:(NSMutableArray *)arg1 ;
-(unsigned long long)roadAccessPointsCount;
-(BOOL)hasMapRegion;
-(GEOMapRegion *)mapRegion;
-(void)setMapRegion:(GEOMapRegion *)arg1 ;
-(GEOStructuredAddress *)spokenStructuredAddress;
-(void)setSpokenStructuredAddress:(GEOStructuredAddress *)arg1 ;
-(double)area;
-(BOOL)hasTimezone;
-(BOOL)hasArea;
-(GEOTimezone *)timezone;
-(void)setHasArea:(BOOL)arg1 ;
-(void)setTimezone:(GEOTimezone *)arg1 ;
-(void)setArea:(double)arg1 ;
-(BOOL)hasDisplayMapRegion;
-(GEOMapRegion *)displayMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(void)setAddress:(GEOAddress *)arg1 ;
-(BOOL)hasAddress;
-(BOOL)hasUID;
-(void)setHasUID:(BOOL)arg1 ;
-(void)setUID:(long long)arg1 ;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(long long)uID;
-(BOOL)hasPhoneticName;
-(BOOL)hasName;
-(id)businessAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)businessCount;
-(NSMutableArray *)entryPoints;
-(void)setSpokenAddress:(NSString *)arg1 ;
-(BOOL)isDisputed;
-(BOOL)hasSpokenStructuredAddress;
-(NSString *)spokenName;
-(void)setIsDisputed:(BOOL)arg1 ;
-(int)localSearchProviderID;
-(unsigned long long)entryPointsCount;
-(void)clearBusiness;
-(void)setHasIsDisputed:(BOOL)arg1 ;
-(id)entryPointAtIndex:(unsigned long long)arg1 ;
-(NSString *)spokenAddress;
-(BOOL)hasIsDisputed;
-(void)setLocalSearchProviderID:(int)arg1 ;
-(void)setBusiness:(NSMutableArray *)arg1 ;
-(void)setHasGeoId:(BOOL)arg1 ;
-(void)setHasLocalSearchProviderID:(BOOL)arg1 ;
-(void)clearEntryPoints;
-(BOOL)hasSpokenName;
-(void)addEntryPoint:(id)arg1 ;
-(void)setGeoId:(long long)arg1 ;
-(BOOL)hasLocalSearchProviderID;
-(GEOAddress *)phoneticAddress;
-(int)addressGeocodeAccuracy;
-(void)setEntryPoints:(NSMutableArray *)arg1 ;
-(void)setAddressGeocodeAccuracy:(int)arg1 ;
-(BOOL)hasGeoId;
-(BOOL)hasSpokenAddress;
-(void)setPhoneticAddress:(GEOAddress *)arg1 ;
-(BOOL)hasPhoneticAddress;
-(long long)geoId;
-(void)setHasAddressGeocodeAccuracy:(BOOL)arg1 ;
-(id)roadAccessPointsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasAddressGeocodeAccuracy;
-(NSMutableArray *)business;
-(void)addBusiness:(id)arg1 ;
-(void)setSpokenName:(NSString *)arg1 ;
-(void)addRoadAccessPoints:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasType;
@end

