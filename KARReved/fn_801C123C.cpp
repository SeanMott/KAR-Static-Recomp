//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_Rider_ActionStateChange.hpp"



void fn_801C123C(PPC::Runtime::GCContext* context)
{
/*801C123C 001BE03C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C1240 001BE040*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C1244 001BE044*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E18E8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C1248 001BE048*/ PPC::Runtime::ASM::li(context->r4, 0x37);
/*801C124C 001BE04C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1250 001BE050*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801C1254 001BE054*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801C1258 001BE058*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E18EC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C125C 001BE05C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C1260 001BE060*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801C1264 001BE064*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801C1268 001BE068*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80c, context->r3));
/*801C126C 001BE06C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x920, context->r3));
/*801C1270 001BE070*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x74);
/*801C1274 001BE074*/ PPC::Runtime::ASM::bl(fn_Rider_ActionStateChange);
/*801C1278 001BE078*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r31));
/*801C127C 001BE07C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801C1280 001BE080*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801C1284 001BE084*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x928, context->r31));
/*801C1288 001BE088*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C128C 001BE08C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C1290 001BE090*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C1294 001BE094*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C1298 001BE098*/ PPC::Runtime::ASM::blr();
}