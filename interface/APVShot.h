#ifndef DPGAnalysis_SiStripTools_APVShot_h
#define DPGAnalysis_SiStripTools_APVShot_h

#include <vector>
#include "DataFormats/DetId/interface/DetId.h"

class SiStripDigi;


class APVShot {

 public:
  APVShot();
  APVShot(const std::vector<SiStripDigi>& digis, const DetId& detid);

  void computeShot(const std::vector<SiStripDigi>& digis, const DetId& detid);

  const bool isGenuine() const;
  const int apvNumber() const;
  const int nStrips() const;
  const float median() const;
  const int subDet() const;

 private:

  int _apv;
  int _nstrips;
  float _median;
  DetId _detid;

  const static int _threshold;

};

#endif // DPGAnalysis_SiStripTools_APVShot_h
