//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016FBF0.hpp"
#include "fn_8016FFC8.hpp"
#include "fn_801703F0.hpp"
#include "fn_80146A40.hpp"
#include "fn_80146AE0.hpp"



void fn_8016F240(PPC::Runtime::GCContext* context)
{
/*8016F240 0016C040*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8016F244 0016C044*/ PPC::Runtime::ASM::mflr(context->r0);
/*8016F248 0016C048*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016F24C 0016C04C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016F250 0016C050*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016F254 0016C054*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016F258 0016C058*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016F25C 0016C05C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8016F260 0016C060*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*8016F264 0016C064*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbe0, context->r3));
/*8016F268 0016C068*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8016F26C 0016C06C*/ PPC::Runtime::ASM::beq(.L_8016F2E8);
/*8016F270 0016C070*/ PPC::Runtime::ASM::extsb(context->r0, context->r28);
/*8016F274 0016C074*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8016F278 0016C078*/ PPC::Runtime::ASM::slwi(context->r30, context->r0, 5);
/*8016F27C 0016C07C*/ PPC::Runtime::ASM::li(context->r3, 0x2);
/*8016F280 0016C080*/ PPC::Runtime::ASM::add(context->r31, context->r29, context->r30);
/*8016F284 0016C084*/ PPC::Runtime::ASM::li(context->r0, 0xf);
/*8016F288 0016C088*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r31));
/*8016F28C 0016C08C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B88 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016F290 0016C090*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8016F294 0016C094*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016F298 0016C098*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAll);
/*8016F29C 0016C09C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016F2A0 0016C0A0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0B8C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8016F2A4 0016C0A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r3));
/*8016F2A8 0016C0A8*/ PPC::Runtime::ASM::bl(fn_HSD_AObjSetRate);
/*8016F2AC 0016C0AC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r31));
/*8016F2B0 0016C0B0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnim?);
/*8016F2B4 0016C0B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a, context->r31));
/*8016F2B8 0016C0B8*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*8016F2BC 0016C0BC*/ PPC::Runtime::ASM::bne(.L_8016F2E8);
/*8016F2C0 0016C0C0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016F2C4 0016C0C4*/ PPC::Runtime::ASM::bl(fn_8016FBF0);
/*8016F2C8 0016C0C8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016F2CC 0016C0CC*/ PPC::Runtime::ASM::bl(fn_8016FFC8);
/*8016F2D0 0016C0D0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016F2D4 0016C0D4*/ PPC::Runtime::ASM::bl(fn_801703F0);
/*8016F2D8 0016C0D8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016F2DC 0016C0DC*/ PPC::Runtime::ASM::bl(fn_80146A40);
/*8016F2E0 0016C0E0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*8016F2E4 0016C0E4*/ PPC::Runtime::ASM::bl(fn_80146AE0);
RUNTIME_PPC_JUMP_LABEL(.L_8016F2E8, 0x8016F2E8) //this is a jump label
/*8016F2E8 0016C0E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8016F2EC 0016C0EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8016F2F0 0016C0F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8016F2F4 0016C0F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8016F2F8 0016C0F8*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8016F2FC 0016C0FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8016F300 0016C100*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8016F304 0016C104*/ PPC::Runtime::ASM::blr();
}