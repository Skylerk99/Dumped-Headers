/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/GEOMapItemPrivate.h>

@class GEOPlace, GEOPDPlace, GEOMapItemClientAttributes, NSData, NSArray, GEOPDFlyover, NSString, NSURL, GEOMapItemPlaceAttribution, GEOMapItemPhotosAttribution, GEOMapItemReviewsAttribution, GEOMapItemAttribution, GEOFeatureStyleAttributes, GEOPDBusinessClaim, VKLabelMarker, GEOMapRegion, GEOAddress, NSDictionary, NSTimeZone, NSDate;

@interface _MKLabelMarkerItem : NSObject <GEOMapItemPrivate> {

	VKLabelMarker* _labelMarker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSData * encodedData; 
@property (getter=isDisputed,nonatomic,readonly) BOOL disputed; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK1 centerCoordinate; 
@property (nonatomic,readonly) int referenceFrame; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegion; 
@property (nonatomic,readonly) GEOMapRegion * geoFenceMapRegion; 
@property (nonatomic,readonly) GEOAddress * geoAddress; 
@property (nonatomic,readonly) NSDictionary * addressDictionary; 
@property (nonatomic,readonly) NSArray * areasOfInterest; 
@property (nonatomic,readonly) NSTimeZone * timezone; 
@property (nonatomic,readonly) GEOMapRegion * displayMapRegionOrNil; 
@property (nonatomic,readonly) int contactAddressType; 
@property (nonatomic,readonly) NSString * contactName; 
@property (nonatomic,readonly) NSString * contactSpokenName; 
@property (nonatomic,readonly) BOOL contactIsMe; 
@property (nonatomic,readonly) NSString * eventName; 
@property (nonatomic,readonly) NSDate * eventDate; 
@property (nonatomic,readonly) BOOL isEventAllDay; 
@property (getter=_place,nonatomic,readonly) GEOPlace * place; 
@property (getter=_placeData,nonatomic,readonly) GEOPDPlace * placeData; 
@property (getter=_clientAttributes,nonatomic,readonly) GEOMapItemClientAttributes * clientAttributes; 
@property (getter=_placeDataAsData,nonatomic,readonly) NSData * placeDataAsData; 
@property (getter=_hasResolvablePartialInformation,nonatomic,readonly) BOOL hasResolvablePartialInformation; 
@property (getter=_placeType,nonatomic,readonly) int placeType; 
@property (getter=_addressGeocodeAccuracy,nonatomic,readonly) int addressGeocodeAccuracy; 
@property (getter=_roadAccessPoints,nonatomic,readonly) NSArray * roadAccessPoints; 
@property (getter=_hasResultProviderID,nonatomic,readonly) BOOL hasResultProviderID; 
@property (getter=_resultProviderID,nonatomic,readonly) int resultProviderID; 
@property (getter=_hasTransit,nonatomic,readonly) BOOL hasTransit; 
@property (getter=_transitInfo,nonatomic,readonly) id<GEOMapItemTransitInfo> transitInfo; 
@property (getter=_transitAttribution,nonatomic,readonly) id<GEOMapItemTransitAttribution> transitAttribution; 
@property (getter=_hasFlyover,nonatomic,readonly) BOOL hasFlyover; 
@property (getter=_flyover,nonatomic,readonly) GEOPDFlyover * flyover; 
@property (getter=_flyoverAnnouncementMessage,nonatomic,readonly) NSString * flyoverAnnouncementMessage; 
@property (getter=_hasMUID,nonatomic,readonly) BOOL hasMUID; 
@property (getter=_muid,nonatomic,readonly) unsigned long long muid; 
@property (getter=_hasAreaInMeters,nonatomic,readonly) BOOL hasAreaInMeters; 
@property (getter=_areaInMeters,nonatomic,readonly) double areaInMeters; 
@property (getter=_businessURL,nonatomic,readonly) NSString * businessURL; 
@property (getter=_hasUserRatingScore,nonatomic,readonly) BOOL hasUserRatingScore; 
@property (getter=_sampleSizeForUserRatingScore,nonatomic,readonly) unsigned sampleSizeForUserRatingScore; 
@property (getter=_normalizedUserRatingScore,nonatomic,readonly) float normalizedUserRatingScore; 
@property (getter=_hasPriceRange,nonatomic,readonly) BOOL hasPriceRange; 
@property (getter=_priceRange,nonatomic,readonly) unsigned priceRange; 
@property (getter=_hasAnyAmenities,nonatomic,readonly) BOOL hasAnyAmenities; 
@property (getter=_hasDeliveryAmenity,nonatomic,readonly) BOOL hasDeliveryAmenity; 
@property (getter=_hasDelivery,nonatomic,readonly) BOOL hasDelivery; 
@property (getter=_hasGoodForKidsAmenity,nonatomic,readonly) BOOL hasGoodForKidsAmenity; 
@property (getter=_goodForKids,nonatomic,readonly) BOOL goodForKids; 
@property (getter=_hasTakesReservationsAmenity,nonatomic,readonly) BOOL hasTakesReservationsAmenity; 
@property (getter=_takesReservations,nonatomic,readonly) BOOL takesReservations; 
@property (getter=_hasAcceptsApplePayAmenity,nonatomic,readonly) BOOL hasAcceptsApplePayAmenity; 
@property (getter=_acceptsApplePay,nonatomic,readonly) BOOL acceptsApplePay; 
@property (getter=_hasOperatingHours,nonatomic,readonly) BOOL hasOperatingHours; 
@property (getter=_hasCurrentOperatingHours,nonatomic,readonly) BOOL hasCurrentOperatingHours; 
@property (getter=_operatingHours,nonatomic,readonly) NSArray * operatingHours; 
@property (getter=_hasTelephone,nonatomic,readonly) BOOL hasTelephone; 
@property (getter=_telephone,nonatomic,readonly) NSString * telephone; 
@property (getter=_hasTextBlock,nonatomic,readonly) BOOL hasTextBlock; 
@property (getter=_textBlockTitle,nonatomic,readonly) NSString * textBlockTitle; 
@property (getter=_textBlockText,nonatomic,readonly) NSString * textBlockText; 
@property (getter=_hasPairOfFactoids,nonatomic,readonly) BOOL hasPairOfFactoids; 
@property (getter=_factoids,nonatomic,readonly) NSArray * factoids; 
@property (getter=_disambiguationName,nonatomic,readonly) NSString * disambiguationName; 
@property (getter=_openingHoursOptions,nonatomic,readonly) unsigned long long openingHoursOptions; 
@property (getter=_needsAttribution,nonatomic,readonly) BOOL needsAttribution; 
@property (getter=_webURL,nonatomic,copy,readonly) NSURL * webURL; 
@property (getter=_providerURL,nonatomic,copy,readonly) NSURL * providerURL; 
@property (getter=_vendorID,nonatomic,copy,readonly) NSString * vendorID; 
@property (getter=_attribution,nonatomic,readonly) GEOMapItemPlaceAttribution * attribution; 
@property (getter=_photosAttribution,nonatomic,readonly) GEOMapItemPhotosAttribution * photosAttribution; 
@property (getter=_reviewsAttribution,nonatomic,readonly) GEOMapItemReviewsAttribution * reviewsAttribution; 
@property (getter=_encyclopedicAttribution,nonatomic,readonly) GEOMapItemAttribution * encyclopedicAttribution; 
@property (getter=_poiSurveyURLString,nonatomic,readonly) NSString * poiSurveyURLString; 
@property (getter=_styleAttributes,nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (getter=_customIconID,nonatomic,readonly) unsigned long long customIconID; 
@property (getter=_additionalPlaceInfos,nonatomic,readonly) NSArray * additionalPlaceInfos; 
@property (getter=_hasBusinessClaim,nonatomic,readonly) BOOL hasBusinessClaim; 
@property (getter=_businessClaim,nonatomic,readonly) GEOPDBusinessClaim * businessClaim; 
@property (getter=_resultSnippetLocationString,nonatomic,readonly) NSString * resultSnippetLocationString; 
@property (getter=_resultSnippetDistanceDisplayThreshold,nonatomic,readonly) unsigned resultSnippetDistanceDisplayThreshold; 
@property (getter=_reviews,nonatomic,readonly) NSArray * reviews; 
@property (getter=_photos,nonatomic,readonly) NSArray * photos; 
+(id)labelMarkerItemWithLabelMarker:(id)arg1 ;
-(id)initWithLabelMarker:(id)arg1 ;
-(void)loadTransitAttributionDetails:(/*^block*/id)arg1 ;
-(id)_transitAttributionSummaries;
-(SCD_Struct_MK1)coordinate;
-(NSString *)name;
-(BOOL)isValid;
-(id)_roadAccessPoints;
-(NSTimeZone *)timezone;
-(GEOMapRegion *)displayMapRegion;
-(unsigned long long)_muid;
-(int)referenceFrame;
-(id)_photos;
-(id)_telephone;
-(id)_styleAttributes;
-(BOOL)isDisputed;
-(int)_addressGeocodeAccuracy;
-(id)_place;
-(BOOL)isEventAllDay;
-(NSDate *)eventDate;
-(NSString *)eventName;
-(SCD_Struct_MK1)centerCoordinate;
-(id)_operatingHours;
-(id)_reviews;
-(BOOL)_hasResultProviderID;
-(int)_recommendedTransportType;
-(int)_resultProviderID;
-(id)_reviewsAttribution;
-(BOOL)_hasTravelTimeForTransportType:(int)arg1 ;
-(id)_encyclopedicAttribution;
-(id)_spokenAddressForLocale:(id)arg1 ;
-(float)_normalizedUserRatingScore;
-(int)_placeType;
-(unsigned long long)_customIconID;
-(id)_arrivalMapRegionForTransportType:(int)arg1 ;
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
-(id)_asPlaceInfo;
-(id)_textBlockText;
-(BOOL)_hasPairOfFactoids;
-(id)_factoids;
-(id)_disambiguationName;
-(unsigned long long)_openingHoursOptions;
-(id)_localizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_hasLocalizedCategoryNamesForType:(unsigned)arg1 ;
-(BOOL)_needsAttribution;
-(id)_placeData;
-(BOOL)_hasOperatingHours;
-(BOOL)_hasResolvablePartialInformation;
-(BOOL)_hasCurrentOperatingHours;
-(id)_placeDataAsData;
-(BOOL)_hasTelephone;
-(id)_mapItemByStrippingOptionalData;
-(BOOL)_hasTextBlock;
-(id)_textBlockTitle;
-(BOOL)_hasDeliveryAmenity;
-(BOOL)_hasAnyAmenities;
-(int)contactAddressType;
-(unsigned)_priceRange;
-(GEOMapRegion *)displayMapRegionOrNil;
-(NSDictionary *)addressDictionary;
-(BOOL)_hasPriceRange;
-(NSString *)contactName;
-(id)_clientAttributes;
-(id)_poiSurveyURLString;
-(BOOL)contactIsMe;
-(NSString *)contactSpokenName;
-(BOOL)_acceptsApplePay;
-(BOOL)_hasAcceptsApplePayAmenity;
-(BOOL)_takesReservations;
-(GEOMapRegion *)geoFenceMapRegion;
-(BOOL)_hasTakesReservationsAmenity;
-(id)_urlForReview:(id)arg1 ;
-(BOOL)_goodForKids;
-(GEOAddress *)geoAddress;
-(BOOL)_hasGoodForKidsAmenity;
-(NSArray *)areasOfInterest;
-(BOOL)_hasDelivery;
-(id)_urlForPhotoWithUID:(id)arg1 ;
-(BOOL)_hasAreaInMeters;
-(id)_urlForWritingAReview;
-(BOOL)_hasMUID;
-(id)spokenNameForLocale:(id)arg1 ;
-(id)_flyoverAnnouncementMessage;
-(NSData *)encodedData;
-(BOOL)_hasBusinessClaim;
-(id)_additionalPlaceInfos;
-(unsigned)_sampleSizeForUserRatingScore;
-(BOOL)_hasUserRatingScore;
-(id)_businessURL;
-(id)_businessClaim;
-(id)_resultSnippetLocationString;
-(unsigned)_resultSnippetDistanceDisplayThreshold;
-(double)_areaInMeters;
@end

