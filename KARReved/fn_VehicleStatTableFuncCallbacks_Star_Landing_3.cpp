//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D8388.hpp"
#include "fn_801EBFF0.hpp"
#include "fn_801ED330.hpp"
#include "fn_801EC5CC.hpp"
#include "fn_801DA6A8.hpp"
#include "fn_801EC78C.hpp"
#include "fn_801ECAE4.hpp"
#include "fn_801ECD00.hpp"
#include "fn_801ECD74.hpp"
#include "fn_801ECDA8.hpp"
#include "fn_801ECE70.hpp"
#include "fn_801ECF20.hpp"
#include "fn_accelerateStar.hpp"
#include "fn_801ED74C.hpp"
#include "fn_801EC42C.hpp"
#include "fn_801EDC74.hpp"



void fn_VehicleStatTableFuncCallbacks_Star_Landing_3(PPC::Runtime::GCContext* context)
{
/*801EFF18 001ECD18*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801EFF1C 001ECD1C*/ PPC::Runtime::ASM::mflr(context->r0);
/*801EFF20 001ECD20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EFF24 001ECD24*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EFF28 001ECD28*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801EFF2C 001ECD2C*/ PPC::Runtime::ASM::bl(fn_801D8388);
/*801EFF30 001ECD30*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF34 001ECD34*/ PPC::Runtime::ASM::bl(fn_801EBFF0);
/*801EFF38 001ECD38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF3C 001ECD3C*/ PPC::Runtime::ASM::bl(fn_801ED330);
/*801EFF40 001ECD40*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF44 001ECD44*/ PPC::Runtime::ASM::bl(fn_801EC5CC);
/*801EFF48 001ECD48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF4C 001ECD4C*/ PPC::Runtime::ASM::bl(fn_801DA6A8);
/*801EFF50 001ECD50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF54 001ECD54*/ PPC::Runtime::ASM::bl(fn_801EC78C);
/*801EFF58 001ECD58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF5C 001ECD5C*/ PPC::Runtime::ASM::bl(fn_801ECAE4);
/*801EFF60 001ECD60*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF64 001ECD64*/ PPC::Runtime::ASM::bl(fn_801ECD00);
/*801EFF68 001ECD68*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF6C 001ECD6C*/ PPC::Runtime::ASM::bl(fn_801ECD74);
/*801EFF70 001ECD70*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF74 001ECD74*/ PPC::Runtime::ASM::bl(fn_801ECDA8);
/*801EFF78 001ECD78*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF7C 001ECD7C*/ PPC::Runtime::ASM::bl(fn_801ECE70);
/*801EFF80 001ECD80*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF84 001ECD84*/ PPC::Runtime::ASM::bl(fn_801ECF20);
/*801EFF88 001ECD88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF8C 001ECD8C*/ PPC::Runtime::ASM::bl(fn_accelerateStar);
/*801EFF90 001ECD90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF94 001ECD94*/ PPC::Runtime::ASM::bl(fn_801ED74C);
/*801EFF98 001ECD98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFF9C 001ECD9C*/ PPC::Runtime::ASM::bl(fn_801EC42C);
/*801EFFA0 001ECDA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801EFFA4 001ECDA4*/ PPC::Runtime::ASM::bl(fn_801EDC74);
/*801EFFA8 001ECDA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801EFFAC 001ECDAC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801EFFB0 001ECDB0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801EFFB4 001ECDB4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801EFFB8 001ECDB8*/ PPC::Runtime::ASM::blr();
}