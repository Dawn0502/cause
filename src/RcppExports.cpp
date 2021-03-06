// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// loglik_ij
double loglik_ij(const double rho, const double g, const double gp, const double q, const double sigma1, const double sigma2, const double b1, const double b2, const double s1, const double s2);
RcppExport SEXP _cause_loglik_ij(SEXP rhoSEXP, SEXP gSEXP, SEXP gpSEXP, SEXP qSEXP, SEXP sigma1SEXP, SEXP sigma2SEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type g(gSEXP);
    Rcpp::traits::input_parameter< const double >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< const double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< const double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< const double >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const double >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_ij(rho, g, gp, q, sigma1, sigma2, b1, b2, s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// loglik_mat
NumericMatrix loglik_mat(double rho, double g, double gp, double q, NumericVector tsigma1, NumericVector tsigma2, NumericVector tbeta_hat_1, NumericVector tbeta_hat_2, NumericVector tseb1, NumericVector tseb2);
RcppExport SEXP _cause_loglik_mat(SEXP rhoSEXP, SEXP gSEXP, SEXP gpSEXP, SEXP qSEXP, SEXP tsigma1SEXP, SEXP tsigma2SEXP, SEXP tbeta_hat_1SEXP, SEXP tbeta_hat_2SEXP, SEXP tseb1SEXP, SEXP tseb2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    Rcpp::traits::input_parameter< double >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma1(tsigma1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma2(tsigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_1(tbeta_hat_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_2(tbeta_hat_2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb1(tseb1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb2(tseb2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_mat(rho, g, gp, q, tsigma1, tsigma2, tbeta_hat_1, tbeta_hat_2, tseb1, tseb2));
    return rcpp_result_gen;
END_RCPP
}
// loglik
double loglik(double rho, double g, double gp, double q, NumericVector tsigma1, NumericVector tsigma2, NumericVector tpi, NumericVector tbeta_hat_1, NumericVector tbeta_hat_2, NumericVector tseb1, NumericVector tseb2);
RcppExport SEXP _cause_loglik(SEXP rhoSEXP, SEXP gSEXP, SEXP gpSEXP, SEXP qSEXP, SEXP tsigma1SEXP, SEXP tsigma2SEXP, SEXP tpiSEXP, SEXP tbeta_hat_1SEXP, SEXP tbeta_hat_2SEXP, SEXP tseb1SEXP, SEXP tseb2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< double >::type g(gSEXP);
    Rcpp::traits::input_parameter< double >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma1(tsigma1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma2(tsigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tpi(tpiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_1(tbeta_hat_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_2(tbeta_hat_2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb1(tseb1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb2(tseb2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik(rho, g, gp, q, tsigma1, tsigma2, tpi, tbeta_hat_1, tbeta_hat_2, tseb1, tseb2));
    return rcpp_result_gen;
END_RCPP
}
// loglik_loo
NumericMatrix loglik_loo(NumericVector tg, NumericVector tgp, NumericVector tq, double rho, NumericVector tsigma1, NumericVector tsigma2, NumericVector tpi, NumericVector tbeta_hat_1, NumericVector tbeta_hat_2, NumericVector tseb1, NumericVector tseb2);
RcppExport SEXP _cause_loglik_loo(SEXP tgSEXP, SEXP tgpSEXP, SEXP tqSEXP, SEXP rhoSEXP, SEXP tsigma1SEXP, SEXP tsigma2SEXP, SEXP tpiSEXP, SEXP tbeta_hat_1SEXP, SEXP tbeta_hat_2SEXP, SEXP tseb1SEXP, SEXP tseb2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tg(tgSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tgp(tgpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tq(tqSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma1(tsigma1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma2(tsigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tpi(tpiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_1(tbeta_hat_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_2(tbeta_hat_2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb1(tseb1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb2(tseb2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_loo(tg, tgp, tq, rho, tsigma1, tsigma2, tpi, tbeta_hat_1, tbeta_hat_2, tseb1, tseb2));
    return rcpp_result_gen;
END_RCPP
}
// loglik_ij_Z1
double loglik_ij_Z1(const double rho, const double g, const double gp, const double q, const double sigma1, const double sigma2, const double b1, const double b2, const double s1, const double s2);
RcppExport SEXP _cause_loglik_ij_Z1(SEXP rhoSEXP, SEXP gSEXP, SEXP gpSEXP, SEXP qSEXP, SEXP sigma1SEXP, SEXP sigma2SEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type g(gSEXP);
    Rcpp::traits::input_parameter< const double >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< const double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< const double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< const double >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const double >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_ij_Z1(rho, g, gp, q, sigma1, sigma2, b1, b2, s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// loglik_ij_Z0
double loglik_ij_Z0(const double rho, const double g, const double gp, const double q, const double sigma1, const double sigma2, const double b1, const double b2, const double s1, const double s2);
RcppExport SEXP _cause_loglik_ij_Z0(SEXP rhoSEXP, SEXP gSEXP, SEXP gpSEXP, SEXP qSEXP, SEXP sigma1SEXP, SEXP sigma2SEXP, SEXP b1SEXP, SEXP b2SEXP, SEXP s1SEXP, SEXP s2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const double >::type g(gSEXP);
    Rcpp::traits::input_parameter< const double >::type gp(gpSEXP);
    Rcpp::traits::input_parameter< const double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const double >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< const double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< const double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< const double >::type s1(s1SEXP);
    Rcpp::traits::input_parameter< const double >::type s2(s2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_ij_Z0(rho, g, gp, q, sigma1, sigma2, b1, b2, s1, s2));
    return rcpp_result_gen;
END_RCPP
}
// loglik_samps_Z1
NumericMatrix loglik_samps_Z1(NumericVector tg, NumericVector tgp, NumericVector tq, double rho, NumericVector tsigma1, NumericVector tsigma2, NumericVector tpi, NumericVector tbeta_hat_1, NumericVector tbeta_hat_2, NumericVector tseb1, NumericVector tseb2);
RcppExport SEXP _cause_loglik_samps_Z1(SEXP tgSEXP, SEXP tgpSEXP, SEXP tqSEXP, SEXP rhoSEXP, SEXP tsigma1SEXP, SEXP tsigma2SEXP, SEXP tpiSEXP, SEXP tbeta_hat_1SEXP, SEXP tbeta_hat_2SEXP, SEXP tseb1SEXP, SEXP tseb2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tg(tgSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tgp(tgpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tq(tqSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma1(tsigma1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma2(tsigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tpi(tpiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_1(tbeta_hat_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_2(tbeta_hat_2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb1(tseb1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb2(tseb2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_samps_Z1(tg, tgp, tq, rho, tsigma1, tsigma2, tpi, tbeta_hat_1, tbeta_hat_2, tseb1, tseb2));
    return rcpp_result_gen;
END_RCPP
}
// loglik_samps_Z0
NumericMatrix loglik_samps_Z0(NumericVector tg, NumericVector tgp, NumericVector tq, double rho, NumericVector tsigma1, NumericVector tsigma2, NumericVector tpi, NumericVector tbeta_hat_1, NumericVector tbeta_hat_2, NumericVector tseb1, NumericVector tseb2);
RcppExport SEXP _cause_loglik_samps_Z0(SEXP tgSEXP, SEXP tgpSEXP, SEXP tqSEXP, SEXP rhoSEXP, SEXP tsigma1SEXP, SEXP tsigma2SEXP, SEXP tpiSEXP, SEXP tbeta_hat_1SEXP, SEXP tbeta_hat_2SEXP, SEXP tseb1SEXP, SEXP tseb2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type tg(tgSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tgp(tgpSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tq(tqSEXP);
    Rcpp::traits::input_parameter< double >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma1(tsigma1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tsigma2(tsigma2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tpi(tpiSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_1(tbeta_hat_1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tbeta_hat_2(tbeta_hat_2SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb1(tseb1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type tseb2(tseb2SEXP);
    rcpp_result_gen = Rcpp::wrap(loglik_samps_Z0(tg, tgp, tq, rho, tsigma1, tsigma2, tpi, tbeta_hat_1, tbeta_hat_2, tseb1, tseb2));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_cause_loglik_ij", (DL_FUNC) &_cause_loglik_ij, 10},
    {"_cause_loglik_mat", (DL_FUNC) &_cause_loglik_mat, 10},
    {"_cause_loglik", (DL_FUNC) &_cause_loglik, 11},
    {"_cause_loglik_loo", (DL_FUNC) &_cause_loglik_loo, 11},
    {"_cause_loglik_ij_Z1", (DL_FUNC) &_cause_loglik_ij_Z1, 10},
    {"_cause_loglik_ij_Z0", (DL_FUNC) &_cause_loglik_ij_Z0, 10},
    {"_cause_loglik_samps_Z1", (DL_FUNC) &_cause_loglik_samps_Z1, 11},
    {"_cause_loglik_samps_Z0", (DL_FUNC) &_cause_loglik_samps_Z0, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_cause(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
