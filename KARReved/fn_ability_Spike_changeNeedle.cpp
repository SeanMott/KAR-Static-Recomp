//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80198910.hpp"
#include "fn_800550F4.hpp"
#include "fn_80198910.hpp"
#include "fn_80198910.hpp"
#include "fn_800550F4.hpp"
#include "fn_80198910.hpp"



void fn_ability_Spike_changeNeedle(PPC::Runtime::GCContext* context)
{
/*801A735C 001A415C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801A7360 001A4160*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A7364 001A4164*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A7368 001A4168*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A736C 001A416C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A7370 001A4170*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*801A7374 001A4174*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A7378 001A4178*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*801A737C 001A417C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r3));
/*801A7380 001A4180*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*801A7384 001A4184*/ PPC::Runtime::ASM::beq(.L_801A74B4);
/*801A7388 001A4188*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r29));
/*801A738C 001A418C*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*801A7390 001A4190*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A7394 001A4194*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*801A7398 001A4198*/ PPC::Runtime::ASM::beq(.L_801A7434);
/*801A739C 001A419C*/ PPC::Runtime::ASM::bge(.L_801A73B0);
/*801A73A0 001A41A0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*801A73A4 001A41A4*/ PPC::Runtime::ASM::beq(.L_801A73BC);
/*801A73A8 001A41A8*/ PPC::Runtime::ASM::bge(.L_801A7400);
/*801A73AC 001A41AC*/ PPC::Runtime::ASM::b(.L_801A74A8);
RUNTIME_PPC_JUMP_LABEL(.L_801A73B0, 0x801A73B0) //this is a jump label
/*801A73B0 001A41B0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*801A73B4 001A41B4*/ PPC::Runtime::ASM::bge(.L_801A74A8);
/*801A73B8 001A41B8*/ PPC::Runtime::ASM::b(.L_801A7478);
RUNTIME_PPC_JUMP_LABEL(.L_801A73BC, 0x801A73BC) //this is a jump label
/*801A73BC 001A41BC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r4));
/*801A73C0 001A41C0*/ PPC::Runtime::ASM::bl(fn_80198910);
/*801A73C4 001A41C4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A73C8 001A41C8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A73CC 001A41CC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A73D0 001A41D0*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A73D4 001A41D4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A73D8 001A41D8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A73DC 001A41DC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A73E0 001A41E0*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A73E4 001A41E4*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A73E8 001A41E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A73EC 001A41EC*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*801A73F0 001A41F0*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A73F4 001A41F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A73F8 001A41F8*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801A73FC 001A41FC*/ PPC::Runtime::ASM::b(.L_801A74A8);
RUNTIME_PPC_JUMP_LABEL(.L_801A7400, 0x801A7400) //this is a jump label
/*801A7400 001A4200*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r4));
/*801A7404 001A4204*/ PPC::Runtime::ASM::bl(fn_80198910);
/*801A7408 001A4208*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A740C 001A420C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A7410 001A4210*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A7414 001A4214*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A7418 001A4218*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A741C 001A421C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7420 001A4220*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A7424 001A4224*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A7428 001A4228*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A742C 001A422C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801A7430 001A4230*/ PPC::Runtime::ASM::b(.L_801A74A8);
RUNTIME_PPC_JUMP_LABEL(.L_801A7434, 0x801A7434) //this is a jump label
/*801A7434 001A4234*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r4));
/*801A7438 001A4238*/ PPC::Runtime::ASM::bl(fn_80198910);
/*801A743C 001A423C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7440 001A4240*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A7444 001A4244*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A7448 001A4248*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A744C 001A424C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A7450 001A4250*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7454 001A4254*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A7458 001A4258*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A745C 001A425C*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*801A7460 001A4260*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7464 001A4264*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*801A7468 001A4268*/ PPC::Runtime::ASM::bl(fn_800550F4);
/*801A746C 001A426C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7470 001A4270*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
/*801A7474 001A4274*/ PPC::Runtime::ASM::b(.L_801A74A8);
RUNTIME_PPC_JUMP_LABEL(.L_801A7478, 0x801A7478) //this is a jump label
/*801A7478 001A4278*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r4));
/*801A747C 001A427C*/ PPC::Runtime::ASM::bl(fn_80198910);
/*801A7480 001A4280*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7484 001A4284*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*801A7488 001A4288*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801A748C 001A428C*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801A7490 001A4290*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAddAnimAll);
/*801A7494 001A4294*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A7498 001A4298*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E1328 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A749C 001A429C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnim);
/*801A74A0 001A42A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8fc, context->r29));
/*801A74A4 001A42A4*/ PPC::Runtime::ASM::bl(fn_HSD_JObjAnimAll?);
RUNTIME_PPC_JUMP_LABEL(.L_801A74A8, 0x801A74A8) //this is a jump label
/*801A74A8 001A42A8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r29));
/*801A74AC 001A42AC*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r30, 4, 25, 27);
/*801A74B0 001A42B0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa00, context->r29));
RUNTIME_PPC_JUMP_LABEL(.L_801A74B4, 0x801A74B4) //this is a jump label
/*801A74B4 001A42B4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801A74B8 001A42B8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801A74BC 001A42BC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801A74C0 001A42C0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A74C4 001A42C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A74C8 001A42C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801A74CC 001A42CC*/ PPC::Runtime::ASM::blr();
}