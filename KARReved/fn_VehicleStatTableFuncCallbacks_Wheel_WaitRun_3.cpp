//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801D8388.hpp"
#include "fn_801F7C20.hpp"
#include "fn_801D8FDC.hpp"
#include "fn_801E0E98.hpp"
#include "fn_accelerateWheelie.hpp"
#include "fn_801F77E0.hpp"
#include "fn_accelerateWheelie.hpp"
#include "fn_801F7E54.hpp"
#include "fn_801DA894.hpp"



void fn_VehicleStatTableFuncCallbacks_Wheel_WaitRun_3(PPC::Runtime::GCContext* context)
{
/*801F8B70 001F5970*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801F8B74 001F5974*/ PPC::Runtime::ASM::mflr(context->r0);
/*801F8B78 001F5978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8B7C 001F597C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8B80 001F5980*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801F8B84 001F5984*/ PPC::Runtime::ASM::bl(fn_801D8388);
/*801F8B88 001F5988*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8B8C 001F598C*/ PPC::Runtime::ASM::bl(fn_801F7C20);
/*801F8B90 001F5990*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8B94 001F5994*/ PPC::Runtime::ASM::bl(fn_801D8FDC);
/*801F8B98 001F5998*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8B9C 001F599C*/ PPC::Runtime::ASM::bl(fn_801E0E98);
/*801F8BA0 001F59A0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8BA4 001F59A4*/ PPC::Runtime::ASM::bl(fn_accelerateWheelie);
/*801F8BA8 001F59A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8BAC 001F59AC*/ PPC::Runtime::ASM::bl(fn_801F77E0);
/*801F8BB0 001F59B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8BB4 001F59B4*/ PPC::Runtime::ASM::bl(fn_accelerateWheelie);
/*801F8BB8 001F59B8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8BBC 001F59BC*/ PPC::Runtime::ASM::bl(fn_801F7E54);
/*801F8BC0 001F59C0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801F8BC4 001F59C4*/ PPC::Runtime::ASM::bl(fn_801DA894);
/*801F8BC8 001F59C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801F8BCC 001F59CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801F8BD0 001F59D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801F8BD4 001F59D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801F8BD8 001F59D8*/ PPC::Runtime::ASM::blr();
}