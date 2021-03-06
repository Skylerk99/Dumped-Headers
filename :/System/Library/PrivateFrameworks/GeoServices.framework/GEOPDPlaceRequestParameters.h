/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteParameters, GEOPDBatchPopularNearbySearchParameters, GEOPDSearchBrowseCategorySuggestionParameters, GEOPDCanonicalLocationSearchParameters, GEOPDCategorySearchParameters, GEOPDGeocodingParameters, GEOPDLocationDirectedSearchParameters, GEOPDMerchantLookupParameters, GEOPDNearbySearchParameters, GEOPDPlaceLookupParameters, GEOPDPlaceRefinementParameters, GEOPDPopularNearbySearchParameters, GEOPDReverseGeocodingParameters, GEOPDSearchFieldPlaceholderParameters, GEOPDSearchParameters, GEOPDSearchZeroKeywordCategorySuggestionParameters, GEOPDSiriSearchParameters, GEOPDVendorSpecificPlaceRefinementParameters;

@interface GEOPDPlaceRequestParameters : PBCodable <NSCopying> {

	GEOPDAutocompleteParameters* _autocompleteParameters;
	GEOPDBatchPopularNearbySearchParameters* _batchPopularNearbySearchParameters;
	GEOPDSearchBrowseCategorySuggestionParameters* _browseCategorySuggestionParameters;
	GEOPDCanonicalLocationSearchParameters* _canonicalLocationSearchParameters;
	GEOPDCategorySearchParameters* _categorySearchParameters;
	GEOPDGeocodingParameters* _geocodingParameters;
	GEOPDLocationDirectedSearchParameters* _locationDirectedSearchParameters;
	GEOPDMerchantLookupParameters* _merchantLookupParameters;
	GEOPDNearbySearchParameters* _nearbySearchParameters;
	GEOPDPlaceLookupParameters* _placeLookupParameters;
	GEOPDPlaceRefinementParameters* _placeRefinementParameters;
	GEOPDPopularNearbySearchParameters* _popularNearbySearchParameters;
	GEOPDReverseGeocodingParameters* _reverseGeocodingParameters;
	GEOPDSearchFieldPlaceholderParameters* _searchFieldPlaceholderParameters;
	GEOPDSearchParameters* _searchParameters;
	GEOPDSearchZeroKeywordCategorySuggestionParameters* _searchZeroKeywordCategorySuggestionParameters;
	GEOPDSiriSearchParameters* _siriSearchParameters;
	GEOPDVendorSpecificPlaceRefinementParameters* _vendorSpecificPlaceRefinementParameters;

}

@property (nonatomic,readonly) BOOL hasSearchParameters; 
@property (nonatomic,retain) GEOPDSearchParameters * searchParameters;                                                                        //@synthesize searchParameters=_searchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasGeocodingParameters; 
@property (nonatomic,retain) GEOPDGeocodingParameters * geocodingParameters;                                                                  //@synthesize geocodingParameters=_geocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasCanonicalLocationSearchParameters; 
@property (nonatomic,retain) GEOPDCanonicalLocationSearchParameters * canonicalLocationSearchParameters;                                      //@synthesize canonicalLocationSearchParameters=_canonicalLocationSearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocodingParameters; 
@property (nonatomic,retain) GEOPDReverseGeocodingParameters * reverseGeocodingParameters;                                                    //@synthesize reverseGeocodingParameters=_reverseGeocodingParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceLookupParameters; 
@property (nonatomic,retain) GEOPDPlaceLookupParameters * placeLookupParameters;                                                              //@synthesize placeLookupParameters=_placeLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasMerchantLookupParameters; 
@property (nonatomic,retain) GEOPDMerchantLookupParameters * merchantLookupParameters;                                                        //@synthesize merchantLookupParameters=_merchantLookupParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDPlaceRefinementParameters * placeRefinementParameters;                                                      //@synthesize placeRefinementParameters=_placeRefinementParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSiriSearchParameters; 
@property (nonatomic,retain) GEOPDSiriSearchParameters * siriSearchParameters;                                                                //@synthesize siriSearchParameters=_siriSearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationDirectedSearchParameters; 
@property (nonatomic,retain) GEOPDLocationDirectedSearchParameters * locationDirectedSearchParameters;                                        //@synthesize locationDirectedSearchParameters=_locationDirectedSearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteParameters; 
@property (nonatomic,retain) GEOPDAutocompleteParameters * autocompleteParameters;                                                            //@synthesize autocompleteParameters=_autocompleteParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBrowseCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchBrowseCategorySuggestionParameters * browseCategorySuggestionParameters;                              //@synthesize browseCategorySuggestionParameters=_browseCategorySuggestionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasCategorySearchParameters; 
@property (nonatomic,retain) GEOPDCategorySearchParameters * categorySearchParameters;                                                        //@synthesize categorySearchParameters=_categorySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasPopularNearbySearchParameters; 
@property (nonatomic,retain) GEOPDPopularNearbySearchParameters * popularNearbySearchParameters;                                              //@synthesize popularNearbySearchParameters=_popularNearbySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchZeroKeywordCategorySuggestionParameters; 
@property (nonatomic,retain) GEOPDSearchZeroKeywordCategorySuggestionParameters * searchZeroKeywordCategorySuggestionParameters;              //@synthesize searchZeroKeywordCategorySuggestionParameters=_searchZeroKeywordCategorySuggestionParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchFieldPlaceholderParameters; 
@property (nonatomic,retain) GEOPDSearchFieldPlaceholderParameters * searchFieldPlaceholderParameters;                                        //@synthesize searchFieldPlaceholderParameters=_searchFieldPlaceholderParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchPopularNearbySearchParameters; 
@property (nonatomic,retain) GEOPDBatchPopularNearbySearchParameters * batchPopularNearbySearchParameters;                                    //@synthesize batchPopularNearbySearchParameters=_batchPopularNearbySearchParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorSpecificPlaceRefinementParameters; 
@property (nonatomic,retain) GEOPDVendorSpecificPlaceRefinementParameters * vendorSpecificPlaceRefinementParameters;                          //@synthesize vendorSpecificPlaceRefinementParameters=_vendorSpecificPlaceRefinementParameters - In the implementation block
@property (nonatomic,readonly) BOOL hasNearbySearchParameters; 
@property (nonatomic,retain) GEOPDNearbySearchParameters * nearbySearchParameters;                                                            //@synthesize nearbySearchParameters=_nearbySearchParameters - In the implementation block
-(id)initWithForwardGeocodeAddressString:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithMapItemToRefine:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 traits:(id)arg3 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 maxResults:(unsigned)arg3 traits:(id)arg4 ;
-(id)initWithSearchQuery:(id)arg1 entryMetadata:(id)arg2 metadata:(id)arg3 autocompleteEntry:(id)arg4 maxResults:(unsigned)arg5 traits:(id)arg6 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 contentProvider:(id)arg5 ;
-(id)initWithExternalBusinessID:(id)arg1 contentProvider:(id)arg2 ;
-(id)initWithForwardGeocodeAddress:(id)arg1 maxResults:(unsigned)arg2 traits:(id)arg3 ;
-(id)initWithMUIDs:(id)arg1 resultProviderID:(int)arg2 ;
-(id)initWithMerchantCode:(id)arg1 rawMerchantCode:(id)arg2 paymentNetwork:(id)arg3 transactionDate:(id)arg4 transactionLocation:(id)arg5 ;
-(id)initWithReverseGeocodeCoordinate:(SCD_Struct_GE16)arg1 ;
-(id)initWithSearchURLQuery:(id)arg1 coordinate:(SCD_Struct_GE16)arg2 muid:(unsigned long long)arg3 resultProviderId:(int)arg4 ;
-(id)initWithMapItemToRefine:(id)arg1 traits:(id)arg2 ;
-(id)initWithPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(id)initWithCanonicalLocationSearchQueryString:(id)arg1 ;
-(id)initWithVendorSpecificPlaceRefinementParameters:(id)arg1 traits:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLocationDirectedSearchParameters:(GEOPDLocationDirectedSearchParameters *)arg1 ;
-(GEOPDMerchantLookupParameters *)merchantLookupParameters;
-(BOOL)hasLocationDirectedSearchParameters;
-(GEOPDSearchFieldPlaceholderParameters *)searchFieldPlaceholderParameters;
-(void)setBatchPopularNearbySearchParameters:(GEOPDBatchPopularNearbySearchParameters *)arg1 ;
-(void)setPlaceLookupParameters:(GEOPDPlaceLookupParameters *)arg1 ;
-(void)setGeocodingParameters:(GEOPDGeocodingParameters *)arg1 ;
-(BOOL)hasAutocompleteParameters;
-(GEOPDSearchZeroKeywordCategorySuggestionParameters *)searchZeroKeywordCategorySuggestionParameters;
-(GEOPDPlaceLookupParameters *)placeLookupParameters;
-(BOOL)hasSearchParameters;
-(BOOL)hasCategorySearchParameters;
-(GEOPDNearbySearchParameters *)nearbySearchParameters;
-(GEOPDSiriSearchParameters *)siriSearchParameters;
-(void)setAutocompleteParameters:(GEOPDAutocompleteParameters *)arg1 ;
-(GEOPDVendorSpecificPlaceRefinementParameters *)vendorSpecificPlaceRefinementParameters;
-(void)setVendorSpecificPlaceRefinementParameters:(GEOPDVendorSpecificPlaceRefinementParameters *)arg1 ;
-(BOOL)hasBrowseCategorySuggestionParameters;
-(void)setPopularNearbySearchParameters:(GEOPDPopularNearbySearchParameters *)arg1 ;
-(void)setCanonicalLocationSearchParameters:(GEOPDCanonicalLocationSearchParameters *)arg1 ;
-(GEOPDPlaceRefinementParameters *)placeRefinementParameters;
-(BOOL)hasGeocodingParameters;
-(BOOL)hasPopularNearbySearchParameters;
-(void)setMerchantLookupParameters:(GEOPDMerchantLookupParameters *)arg1 ;
-(GEOPDBatchPopularNearbySearchParameters *)batchPopularNearbySearchParameters;
-(BOOL)hasCanonicalLocationSearchParameters;
-(GEOPDSearchBrowseCategorySuggestionParameters *)browseCategorySuggestionParameters;
-(BOOL)hasBatchPopularNearbySearchParameters;
-(void)setBrowseCategorySuggestionParameters:(GEOPDSearchBrowseCategorySuggestionParameters *)arg1 ;
-(GEOPDGeocodingParameters *)geocodingParameters;
-(void)setCategorySearchParameters:(GEOPDCategorySearchParameters *)arg1 ;
-(BOOL)hasPlaceLookupParameters;
-(void)setSearchZeroKeywordCategorySuggestionParameters:(GEOPDSearchZeroKeywordCategorySuggestionParameters *)arg1 ;
-(BOOL)hasSearchZeroKeywordCategorySuggestionParameters;
-(GEOPDAutocompleteParameters *)autocompleteParameters;
-(void)setNearbySearchParameters:(GEOPDNearbySearchParameters *)arg1 ;
-(GEOPDLocationDirectedSearchParameters *)locationDirectedSearchParameters;
-(void)setPlaceRefinementParameters:(GEOPDPlaceRefinementParameters *)arg1 ;
-(BOOL)hasSearchFieldPlaceholderParameters;
-(BOOL)hasReverseGeocodingParameters;
-(GEOPDSearchParameters *)searchParameters;
-(GEOPDPopularNearbySearchParameters *)popularNearbySearchParameters;
-(void)setSiriSearchParameters:(GEOPDSiriSearchParameters *)arg1 ;
-(BOOL)hasMerchantLookupParameters;
-(void)setReverseGeocodingParameters:(GEOPDReverseGeocodingParameters *)arg1 ;
-(GEOPDReverseGeocodingParameters *)reverseGeocodingParameters;
-(void)setSearchFieldPlaceholderParameters:(GEOPDSearchFieldPlaceholderParameters *)arg1 ;
-(BOOL)hasSiriSearchParameters;
-(GEOPDCategorySearchParameters *)categorySearchParameters;
-(BOOL)hasVendorSpecificPlaceRefinementParameters;
-(BOOL)hasPlaceRefinementParameters;
-(void)setSearchParameters:(GEOPDSearchParameters *)arg1 ;
-(GEOPDCanonicalLocationSearchParameters *)canonicalLocationSearchParameters;
-(BOOL)hasNearbySearchParameters;
-(BOOL)readFrom:(id)arg1 ;
@end

