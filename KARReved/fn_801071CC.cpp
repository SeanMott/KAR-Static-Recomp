//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_killWhispy.hpp"
#include "fn_80107370.hpp"
#include "fn_80107370.hpp"



void fn_801071CC(PPC::Runtime::GCContext* context)
{
/*801071CC 00103FCC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801071D0 00103FD0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801071D4 00103FD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFA68 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801071D8 00103FD8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801071DC 00103FDC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801071E0 00103FE0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801071E4 00103FE4*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801071E8 00103FE8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFA6C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801071EC 00103FEC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801071F0 00103FF0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801071F4 00103FF4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*801071F8 00103FF8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801071FC 00103FFC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*80107200 00104000*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r6));
/*80107204 00104004*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r6));
/*80107208 00104008*/ PPC::Runtime::ASM::bl(fn_killWhispy);
/*8010720C 0010400C*/ PPC::Runtime::ASM::lis(context->r3, fn_80107370 @ Get_MemoryOffset_HighBit);
/*80107210 00104010*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80107370 @ Get_MemoryOffset_LowBit);
/*80107214 00104014*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r31));
/*80107218 00104018*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8010721C 0010401C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80107220 00104020*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80107224 00104024*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80107228 00104028*/ PPC::Runtime::ASM::blr();
}