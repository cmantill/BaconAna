#ifndef BACONANA_DATAFORMATS_TJET_HH
#define BACONANA_DATAFORMATS_TJET_HH

#include "BaconAna/DataFormats/interface/BaconAnaDefs.hh"
#include <TObject.h>

namespace baconhep
{
  class TJet : public TObject
  {
    public:
      TJet():
      pt(0), eta(0), phi(0), mass(0), ptRaw(0),unc(0),
      area(0), d0(-999), dz(-999),
      csv(-2),
      qgid(-2), axis2(0), ptD(0), mult(0),
      q(0),
      mva(-2), beta(0), betaStar(0), dR2Mean(0),
      pullY(0), pullPhi(0), chPullY(0), chPullPhi(0), neuPullY(0), neuPullPhi(0),
      chEmFrac(0), neuEmFrac(0), chHadFrac(0), neuHadFrac(0), muonFrac(0),
      genpt(0), geneta(0), genphi(0), genm(0),
      partonFlavor(0), hadronFlavor(0),
      nCharged(0), nNeutrals(0), nParticles(0),
      hltMatchBits(0)
      {}
      ~TJet(){}
    
      float          pt, eta, phi, mass, ptRaw, unc;                          // kinematics
      float          area;                                                    // jet area (from FastJet)
      float          d0, dz;                                                  // impact parameter of leading charged constituent
      float          csv,bmva,cvb,cvl;                                        // CSV b-taggers/c-tagger for the jet
      float          qgid, axis2, ptD;                                        // q/g discriminator and input variables
      int            mult;
      float          q;                                                       // Charge for jet and subjets
      float          mva;                                                     // PU discriminator MVA
      float          beta, betaStar, dR2Mean;                                 // input variables for PU and q/g discriminators
      float          pullY, pullPhi;                                          // Jet pull
      float          chPullY, chPullPhi, neuPullY, neuPullPhi;
      float          chEmFrac, neuEmFrac, chHadFrac, neuHadFrac, muonFrac;    // fractional energy contribution by type
      float          genpt, geneta, genphi, genm;                             // Matched GenJet
      int            partonFlavor, hadronFlavor;                              // Flavor
      unsigned int   nCharged, nNeutrals, nParticles;                         // constituent multiplicity
      TriggerObjects hltMatchBits;                                            // HLT matching
          
    ClassDef(TJet,6)
  };
}
#endif
