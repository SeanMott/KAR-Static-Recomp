//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_802592E8(PPC::Runtime::GCContext* context)
{
/*802592E8 002560E8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802592EC 002560EC*/ PPC::Runtime::ASM::mflr(context->r0);
/*802592F0 002560F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802592F4 002560F4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802592F8 002560F8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802592FC 002560FC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80259300 00256100*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80259304 00256104*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80259308 00256108*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025930C 0025610C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80259310 00256110*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80259314 00256114*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*80259318 00256118*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025931C 0025611C*/ PPC::Runtime::ASM::bl(fn_80250940);
/*80259320 00256120*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E28 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80259324 00256124*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80259328 00256128*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E2C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025932C 0025612C*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80259330 00256130*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80259334 00256134*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80259338 00256138*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025933C 0025613C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80259340 00256140*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80259344 00256144*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80259348 00256148*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025934C 0025614C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80259350 00256150*/ PPC::Runtime::ASM::blr();
}