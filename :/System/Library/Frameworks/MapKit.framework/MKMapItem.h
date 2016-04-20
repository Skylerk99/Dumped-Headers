/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/GEOURLSerializable.h>

@protocol GEOMapItemPrivate, GEOMapItemTransitInfo, NSObject;
@class _MKMapItemPlaceAttribution, _MKMapItemPhotosAttribution, _MKMapItemReviewsAttribution, _MKMapItemAttribution, NSString, NSURL, NSTimeZone, MKMapItemMetadata, GEOPlace, MKPlacemark, GEOMapRegion, GEOAddress, GEOPDFlyover, NSArray, NSData, GEOFeatureStyleAttributes, GEOPDBusinessClaim;

@interface MKMapItem : NSObject <GEOURLSerializable> {

	BOOL _isCurrentLocation;
	BOOL _isPlaceHolder;
	id<GEOMapItemPrivate> _geoMapItem;
	BOOL _isTransitInfoUpdated;
	id<GEOMapItemTransitInfo> _updatedTransitInfo;
	id<GEOMapItemTransitInfo> _defaultTransitInfo;
	_MKMapItemPlaceAttribution* _attribution;
	_MKMapItemPhotosAttribution* _photosAttribution;
	_MKMapItemReviewsAttribution* _reviewsAttribution;
	_MKMapItemAttribution* _encyclopedicAttribution;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _url;
	NSTimeZone* _timeZone;
	id<NSObject> _didResolveAttributionToken;
	BOOL _isTransitItem;
	MKMapItemMetadata* _metadata;
	GEOPlace* _place;

}

@property (getter=_hasDisplayableAmenities,readonly) BOOL hasDisplayableAmenities; 
@property (getter=_isEmptyContactMapItem,readonly) BOOL isEmptyContactMapItem; 
@property (nonatomic,readonly) NSString * formattedNumberOfReviews; 
@property (nonatomic,readonly) NSString * formattedNumberOfReviewsIncludingProvider; 
@property (nonatomic,readonly) MKPlacemark * placemark; 
@property (assign,nonatomic) BOOL isCurrentLocation;                                                                         //@synthesize isCurrentLocation=_isCurrentLocation - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * phoneNumber; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (nonatomic,readonly) MKMapItemMetadata * metadata;                                                                 //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) GEOPlace * place;                                                                             //@synthesize place=_place - In the implementation block
@property (getter=_geoMapItem,nonatomic,readonly) id<GEOMapItemPrivate> geoMapItem; 
@property (nonatomic,readonly) NSString * yelpID; 
@property (nonatomic,readonly) BOOL isPlaceHolder;                                                                           //@synthesize isPlaceHolder=_isPlaceHolder - In the implementation block
@property (getter=_coordinate,nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (getter=_displayMapRegion,nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (getter=_geoFenceMapRegion,nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (assign,getter=_isTransitItem,nonatomic) BOOL isTransitItem;                                                       //@synthesize isTransitItem=_isTransitItem - In the implementation block
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_hasTransitDisplayName,nonatomic,readonly) BOOL hasTransitDisplayName; 
@property (getter=_transitDisplayName,nonatomic,readonly) NSString * transitDisplayName; 
@property (getter=_hasTransitLabels,nonatomic,readonly) BOOL hasTransitLabels; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOMapItemTransitAttribution> transitAttribution; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_geoAddress,nonatomic,readonly) GEOAddress * geoAddress; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_firstLocalizedCategoryName,nonatomic,readonly) NSString * firstLocalizedCategoryName; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRangeString,nonatomic,readonly) NSString * priceRangeString; 
@property (getter=_shortAddress,nonatomic,readonly) NSString * shortAddress; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasLocalizedOperatingHours,nonatomic,readonly) BOOL hasLocalizedOperatingHours; 
@property (getter=_localizedOperatingHours,nonatomic,readonly) NSString * localizedOperatingHours; 
@property (getter=_hasTextBlock,nonatomic,readonly) BOOL hasTextBlock; 
@property (getter=_textBlockTitle,nonatomic,readonly) NSString * textBlockTitle; 
@property (getter=_textBlockText,nonatomic,readonly) NSString * textBlockText; 
@property (getter=_hasPairOfFactoids,nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (getter=_factoids,nonatomic,readonly) NSArray * factoids; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_reviewsDisplayName,nonatomic,readonly) NSString * reviewsDisplayName; 
@property (getter=_attribution,nonatomic,readonly) _MKMapItemPlaceAttribution * attribution;                                 //@synthesize attribution=_attribution - In the implementation block
@property (getter=_photosAttribution,nonatomic,readonly) _MKMapItemPhotosAttribution * photosAttribution;                    //@synthesize photosAttribution=_photosAttribution - In the implementation block
@property (getter=_reviewsAttribution,nonatomic,readonly) _MKMapItemReviewsAttribution * reviewsAttribution;                 //@synthesize reviewsAttribution=_reviewsAttribution - In the implementation block
@property (getter=_encyclopedicAttribution,nonatomic,readonly) _MKMapItemAttribution * encyclopedicAttribution;              //@synthesize encyclopedicAttribution=_encyclopedicAttribution - In the implementation block
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_handle,nonatomic,readonly) NSData * handle; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_fillOutRequest:(id)arg1 withMapsDataString:(id)arg2 ;
+(id)contactsAddressDictionaryFromGeoAddressDictionary:(id)arg1 ;
+(id)contactsAddressKeysForGeoAddressKeys;
+(id)_mapItemWithWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 sessionID:(id)arg6 muid:(unsigned long long)arg7 attributionID:(id)arg8 sampleSizeForUserRatingScore:(unsigned)arg9 normalizedUserRatingScore:(float)arg10 ;
+(id)_itemWithGeoMapItem:(id)arg1 ;
+(id)_itemWithAddressBookRef:(void*)arg1 geoMapItem:(id)arg2 ;
+(id)mapItemWithSerializedPlaceData:(id)arg1 ;
+(void)_mapItemsWithSerializedPlaceDataResponse:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)urlForMapItem:(id)arg1 options:(id)arg2 ;
+(id)_urlForMapItemHandles:(id)arg1 options:(id)arg2 ;
+(id)mapItemsFromURL:(id)arg1 options:(id*)arg2 ;
+(void)_mapItemsFromHandleURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)_sharedSessionURLForPunchoutURL:(id)arg1 ;
+(BOOL)_openHandleInMaps:(id)arg1 withLaunchOptions:(id)arg2 ;
+(id)mapItemWithDictionary:(id)arg1 ;
+(BOOL)openMapsWithItems:(id)arg1 launchOptions:(id)arg2 ;
+(void)_mapItemFromHandle:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)plistCompatibleDictionaryFromStandardOptions:(id)arg1 ;
+(id)mapItemForCurrentLocation;
+(id)standardOptionsFromPlistCompatibleDictionary:(id)arg1 ;
+(id)urlForMapItems:(id)arg1 options:(id)arg2 ;
-(id)initWithContact:(id)arg1 ;
-(id)_placeCardContact;
-(id)_initWithLabelMarker:(id)arg1 ;
-(BOOL)_hasDisplayableAmenities;
-(BOOL)_isEmptyContactMapItem;
-(id)_mapsDataString;
-(id)_localizedBusinessHoursWithCurrentOpeningHoursOptions;
-(void)updateWithTransitInfo:(id)arg1 ;
-(id)_reviewForIdentifier:(id)arg1 ;
-(NSString *)formattedNumberOfReviews;
-(NSString *)formattedNumberOfReviewsIncludingProvider;
-(id)sharingURL;
-(id)thumbnailWithSize:(CGSize)arg1 annotationView:(id)arg2 ;
-(SCD_Struct_MK1)_coordinate;
-(MKPlacemark *)placemark;
-(id)initWithCLLocation:(id)arg1 ;
-(id)initWithPlace:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(BOOL)isPlaceHolder;
-(void)setIsTransitItem:(BOOL)arg1 ;
-(id)_attributionWithDisplayName:(id)arg1 attributionFormat:(id)arg2 logo:(id)arg3 ;
-(id)initWithGeoMapItemAsCurrentLocation:(id)arg1 ;
-(id)_structuredAddressDictionaryWithHomeCounty:(BOOL)arg1 includeMultilineAddress:(BOOL)arg2 ;
-(id)_formattedAddressWithSeparator:(id)arg1 ;
-(id)initWithGeoMapItem:(id)arg1 isPlaceHolderPlace:(BOOL)arg2 ;
-(id)_firstLocalizedCategoryName;
-(BOOL)_hasLocalizedOperatingHours;
-(id)_shortAddress;
-(id)_localizedOperatingHours;
-(id)_priceRangeString;
-(void)_refreshAttribution;
-(id)_formattedAddressMultiline;
-(BOOL)openInMapsWithLaunchOptions:(id)arg1 ;
-(id)_handle;
-(id)initWithPlacemark:(id)arg1 ;
-(BOOL)_hasTransitLabels;
-(id)_transitDisplayName;
-(BOOL)_hasTransitDisplayName;
-(id)_activityURL:(BOOL)arg1 ;
-(id)_formattedAddress;
-(BOOL)_isTransitItem;
-(id)_geoFenceMapRegion;
-(id)_reviewsDisplayName;
-(id)_displayMapRegion;
-(NSString *)yelpID;
-(id)_infoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2 ;
-(id)_photoAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2 ;
-(id)_getBusiness;
-(id)_reviewsAttributionWithSourceStringFormat:(id)arg1 moreSourceStringFormat:(id)arg2 ;
-(id)_geoAddress;
-(id)_timeZone;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSURL *)url;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)phoneNumber;
-(id)dictionaryRepresentation;
-(NSTimeZone *)timeZone;
-(unsigned long long)_muid;
-(id)_styleAttributes;
-(GEOPlace *)place;
-(id)urlRepresentation;
-(id)initWithUrlRepresentation:(id)arg1 ;
-(BOOL)_isEquivalentURLRepresentationTo:(id)arg1 ;
-(id)_reviews;
-(BOOL)_hasResultProviderID;
-(int)_recommendedTransportType;
-(int)_resultProviderID;
-(id)_reviewsAttribution;
-(id)_encyclopedicAttribution;
-(float)_normalizedUserRatingScore;
-(id)initWithPlace:(id)arg1 ;
-(unsigned long long)_customIconID;
-(BOOL)_hasFlyover;
-(id)_webURL;
-(id)_flyover;
-(id)_transitAttribution;
-(id)_providerURL;
-(id)_vendorID;
-(id)_attribution;
-(unsigned)_travelTimeForTransportType:(int)arg1 ;
-(id)_transitInfo;
-(BOOL)_hasTransit;
-(id)_photosAttribution;
-(unsigned)_travelDistanceForTransportType:(int)arg1 ;
-(id)_textBlockText;
-(BOOL)_hasPairOfFactoids;
-(id)_factoids;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_needsAttribution;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasResolvablePartialInformation;
-(id)_placeDataAsData;
-(BOOL)_hasTextBlock;
-(id)_textBlockTitle;
-(BOOL)_hasDeliveryAmenity;
-(BOOL)_hasAnyAmenities;
-(BOOL)_hasPriceRange;
-(id)_poiSurveyURLString;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_takesReservations;
-(BOOL)_hasTakesReservationsAmenity;
-(BOOL)_goodForKids;
-(BOOL)_hasGoodForKidsAmenity;
-(BOOL)_hasDelivery;
-(BOOL)_hasMUID;
-(id)_flyoverAnnouncementMessage;
-(BOOL)_hasBusinessClaim;
-(unsigned)_sampleSizeForUserRatingScore;
-(BOOL)_hasUserRatingScore;
-(id)_businessClaim;
-(id)_geoMapItem;
-(BOOL)isCurrentLocation;
-(void)setIsCurrentLocation:(BOOL)arg1 ;
-(id)initWithAddressDictionary:(id)arg1 ;
-(MKMapItemMetadata *)metadata;
-(void)setPhoneNumber:(NSString *)arg1 ;
@end

