/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOTransitDepartureSequence : NSObject <GEOTransitDepartureSequence> {
    <GEOTransitLine> *_line;
    NSSet *_nextStopIDs;
    GEOPDDepartureSequence *_sequence;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *departures;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *direction;
@property (nonatomic, readonly) NSArray *frequencies;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *headsign;
@property (nonatomic, readonly) BOOL isLowFrequency;
@property (nonatomic, readonly) <GEOTransitLine> *line;
@property (nonatomic, readonly) NSSet *nextStopIDs;
@property (nonatomic, readonly) NSArray *operatingHours;
@property (readonly) Class superclass;

- (void)_enumerateDeparturesValidForDate:(id)arg1 withBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)departures;
- (id)departuresValidForDate:(id)arg1;
- (id)direction;
- (id)firstDepartureAfterDate:(id)arg1;
- (id)firstDepartureFrequencyOnOrAfterDate:(id)arg1;
- (id)firstDepartureOnOrAfterDate:(id)arg1;
- (id)firstDepartureValidForDate:(id)arg1;
- (id)firstOpenOperatingDateOnOrAfterDate:(id)arg1;
- (id)frequencies;
- (double)frequencyForSortingAtDate:(id)arg1;
- (id)frequencyToDescribeAtDate:(id)arg1;
- (BOOL)hasFrequencyAtDate:(id)arg1;
- (id)headsign;
- (id)initWithSequence:(id)arg1 line:(id)arg2;
- (BOOL)isDepartureDateInactive:(id)arg1 withReferenceDate:(id)arg2;
- (BOOL)isLowFrequency;
- (BOOL)isValidForDate:(id)arg1 inTimeZone:(id)arg2;
- (id)line;
- (id)nextStopIDs;
- (unsigned int)numberOfDeparturesAfterDate:(id)arg1;
- (id)operatingHours;
- (id)operatingHoursForDate:(id)arg1 inTimeZone:(id)arg2;

@end
