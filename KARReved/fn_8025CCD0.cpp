//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025CCD0(PPC::Runtime::GCContext* context)
{
/*8025CCD0 00259AD0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025CCD4 00259AD4*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025CCD8 00259AD8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CCDC 00259ADC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025CCE0 00259AE0*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025CCE4 00259AE4*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025CCE8 00259AE8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025CCEC 00259AEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025CCF0 00259AF0*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025CCF4 00259AF4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025CCF8 00259AF8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025CCFC 00259AFC*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025CD00 00259B00*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025CD04 00259B04*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025CD08 00259B08*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2ED0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025CD0C 00259B0C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025CD10 00259B10*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2ED4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025CD14 00259B14*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025CD18 00259B18*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025CD1C 00259B1C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025CD20 00259B20*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025CD24 00259B24*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025CD28 00259B28*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025CD2C 00259B2C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025CD30 00259B30*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025CD34 00259B34*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025CD38 00259B38*/ PPC::Runtime::ASM::blr();
}