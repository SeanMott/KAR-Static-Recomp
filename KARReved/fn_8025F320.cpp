//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80250340.hpp"
#include "fn_80251F40.hpp"
#include "fn_80250940.hpp"
#include "fn_8024F488.hpp"



void fn_8025F320(PPC::Runtime::GCContext* context)
{
/*8025F320 0025C120*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025F324 0025C124*/ PPC::Runtime::ASM::mflr(context->r0);
/*8025F328 0025C128*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F32C 0025C12C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F330 0025C130*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F334 0025C134*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*8025F338 0025C138*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8025F33C 0025C13C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F340 0025C140*/ PPC::Runtime::ASM::bl(fn_80250340);
/*8025F344 0025C144*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F348 0025C148*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8025F34C 0025C14C*/ PPC::Runtime::ASM::bl(fn_80251F40);
/*8025F350 0025C150*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8025F354 0025C154*/ PPC::Runtime::ASM::bl(fn_80250940);
/*8025F358 0025C158*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2F40 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025F35C 0025C15C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8025F360 0025C160*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2F44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8025F364 0025C164*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*8025F368 0025C168*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025F36C 0025C16C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8025F370 0025C170*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*8025F374 0025C174*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8025F378 0025C178*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025F37C 0025C17C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8025F380 0025C180*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8025F384 0025C184*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8025F388 0025C188*/ PPC::Runtime::ASM::blr();
}