//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_8024F488.hpp"



void fn_8025B1CC(PPC::Runtime::GCContext* context)
{
/*8025B1CC 00257FCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025B1D0 00257FD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025B1D4 00257FD4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B1D8 00257FD8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B1DC 00257FDC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8025B1E0 00257FE0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025B1E4 00257FE4*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025B1E8 00257FE8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E80 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025B1EC 00257FEC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025B1F0 00257FF0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E84 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025B1F4 00257FF4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*8025B1F8 00257FF8*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025B1FC 00257FFC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025B200 00258000*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025B204 00258004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025B208 00258008*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025B20C 0025800C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025B210 00258010*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025B214 00258014*/ PPC::Runtime::ASM::blr();
}