//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801F8300.hpp"
#include "fn_801F8518.hpp"
#include "fn_801F7E18.hpp"
#include "fn_801CF60C.hpp"
#include "fn_801CDF84.hpp"
#include "fn_801F8538.hpp"
#include "fn_801FA748.hpp"
#include "fn_801FA96C.hpp"
#include "fn_801F7B8C.hpp"
#include "fn_801D34E4.hpp"
#include "fn_801DBE5C.hpp"
#include "fn_801DC250.hpp"
#include "fn_801DC3B8.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_Landing_4(PPC::Runtime::GCContext* context)
{
/*801FB020 001F7E20*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FB024 001F7E24*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FB028 001F7E28*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB02C 001F7E2C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FB030 001F7E30*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801FB034 001F7E34*/ PPC::Runtime::ASM::bl(fn_801F8300);
/*801FB038 001F7E38*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB03C 001F7E3C*/ PPC::Runtime::ASM::bl(fn_801F8518);
/*801FB040 001F7E40*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc30, context->r31));
/* 801FB044 001F7E44  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801FB048 001F7E48*/ PPC::Runtime::ASM::beq(.L_801FB054);
/*801FB04C 001F7E4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB050 001F7E50*/ PPC::Runtime::ASM::bl(fn_801F7E18);
RUNTIME_PPC_JUMP_LABEL(.L_801FB054, 0x801FB054) //this is a jump label
/*801FB054 001F7E54*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB058 001F7E58*/ PPC::Runtime::ASM::bl(fn_801CF60C);
/*801FB05C 001F7E5C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB060 001F7E60*/ PPC::Runtime::ASM::bl(fn_801CDF84);
/*801FB064 001F7E64*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB068 001F7E68*/ PPC::Runtime::ASM::bl(fn_801F8538);
/*801FB06C 001F7E6C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB070 001F7E70*/ PPC::Runtime::ASM::bl(fn_801FA748);
/*801FB074 001F7E74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801FB078 001F7E78*/ PPC::Runtime::ASM::beq(.L_801FB088);
/*801FB07C 001F7E7C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB080 001F7E80*/ PPC::Runtime::ASM::bl(fn_801FA96C);
/*801FB084 001F7E84*/ PPC::Runtime::ASM::b(.L_801FB0B0);
RUNTIME_PPC_JUMP_LABEL(.L_801FB088, 0x801FB088) //this is a jump label
/*801FB088 001F7E88*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB08C 001F7E8C*/ PPC::Runtime::ASM::bl(fn_801F7B8C);
/*801FB090 001F7E90*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB094 001F7E94*/ PPC::Runtime::ASM::bl(fn_801D34E4);
/*801FB098 001F7E98*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB09C 001F7E9C*/ PPC::Runtime::ASM::bl(fn_801DBE5C);
/*801FB0A0 001F7EA0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB0A4 001F7EA4*/ PPC::Runtime::ASM::bl(fn_801DC250);
/*801FB0A8 001F7EA8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FB0AC 001F7EAC*/ PPC::Runtime::ASM::bl(fn_801DC3B8);
RUNTIME_PPC_JUMP_LABEL(.L_801FB0B0, 0x801FB0B0) //this is a jump label
/*801FB0B0 001F7EB0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FB0B4 001F7EB4*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FB0B8 001F7EB8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FB0BC 001F7EBC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FB0C0 001F7EC0*/ PPC::Runtime::ASM::blr();
}