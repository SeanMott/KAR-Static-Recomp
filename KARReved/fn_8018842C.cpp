//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8007859C.hpp"
#include "fn_80078028.hpp"
#include "fn_80076F8C.hpp"



void fn_8018842C(PPC::Runtime::GCContext* context)
{
/*8018842C 0018522C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80188430 00185230*/ PPC::Runtime::ASM::mflr(context->r0);
/*80188434 00185234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80188438 00185238*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8018843C 0018523C*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188440 00185240*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80188444 00185244*/ PPC::Runtime::ASM::beq(.L_801885D4);
/*80188448 00185248*/ PPC::Runtime::ASM::bl(fn_8007859C);
/*8018844C 0018524C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD804 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188450 00185250*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x10);
/*80188454 00185254*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0xc);
/*80188458 00185258*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*8018845C 0018525C*/ PPC::Runtime::ASM::bl(fn_80078028);
/*80188460 00185260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80188464 00185264*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80188468 00185268*/ PPC::Runtime::ASM::beq(.L_801885D4);
/*8018846C 0018526C*/ PPC::Runtime::ASM::lis(context->r3, lbl_804ADAA4 @ Get_MemoryOffset_HighBit);
/*80188470 00185270*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804ADAA4 @ Get_MemoryOffset_LowBit);
/*80188474 00185274*/ PPC::Runtime::ASM::bl(fn_HSD_CObjLoadDesc);
/*80188478 00185278*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018847C 0018527C*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80188480 00185280*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188484 00185284*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*80188488 00185288*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0FE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018848C 0018528C*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetOrtho);
/*80188490 00185290*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E0FD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188494 00185294*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80188498 00185298*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E0FE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8018849C 0018529C*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*801884A0 001852A0*/ PPC::Runtime::ASM::lfs(context->f4, STRUCT_FLOAT_COUNT_1805E0FDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801884A4 001852A4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetViewportfx4);
/*801884A8 001852A8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801884AC 001852AC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801884B0 001852B0*/ PPC::Runtime::ASM::li(context->r5, 0x100);
/*801884B4 001852B4*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801884B8 001852B8*/ PPC::Runtime::ASM::li(context->r7, 0xc0);
/*801884BC 001852BC*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetScissorx4);
/*801884C0 001852C0*/ PPC::Runtime::ASM::li(context->r3, 0x3);
/*801884C4 001852C4*/ PPC::Runtime::ASM::bl(fn_HSD_StartRender);
/*801884C8 001852C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801884CC 001852CC*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetCurrent?);
/*801884D0 001852D0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801884D4 001852D4*/ PPC::Runtime::ASM::beq(.L_80188518);
/*801884D8 001852D8*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DD7F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801884DC 001852DC*/ PPC::Runtime::ASM::lis(context->r3, lbl_804AD9C8 @ Get_MemoryOffset_HighBit);
/*801884E0 001852E0*/ PPC::Runtime::ASM::addi(context->r9, context->r3, lbl_804AD9C8 @ Get_MemoryOffset_LowBit);
/*801884E4 001852E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801884E8 001852E8*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x18);
/*801884EC 001852EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801884F0 001852F0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801884F4 001852F4*/ PPC::Runtime::ASM::li(context->r6, 0x46);
/*801884F8 001852F8*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*801884FC 001852FC*/ PPC::Runtime::ASM::add(context->r8, context->r9, context->r0);
/*80188500 00185300*/ PPC::Runtime::ASM::lfsx(context->f1, context->r9, context->r0);
/*80188504 00185304*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r8));
/*80188508 00185308*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r8));
/*8018850C 0018530C*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r8));
/*80188510 00185310*/ PPC::Runtime::ASM::bl(fn_80076F8C);
/*80188514 00185314*/ PPC::Runtime::ASM::bl(fn_HSD_CObjEndCurrent);
RUNTIME_PPC_JUMP_LABEL(.L_80188518, 0x80188518) //this is a jump label
/*80188518 00185318*/ PPC::Runtime::ASM::bl(fn_804105E4);
/*8018851C 0018531C*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD7FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188520 00185320*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80188524 00185324*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80188528 00185328*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8018852C 0018532C*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*80188530 00185330*/ PPC::Runtime::ASM::bl(fn_HSD_ImageDescCopyFromEFB);
/*80188534 00185334*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD7FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188538 00185338*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8018853C 0018533C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80188540 00185340*/ PPC::Runtime::ASM::lhz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80188544 00185344*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r5));
/*80188548 00185348*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8018854C 0018534C*/ PPC::Runtime::ASM::bl(fn_GXGetTexBufferSize);
/*80188550 00185350*/ PPC::Runtime::ASM::lwz(context->r5, STRUCT_BYTE4_COUNT_1805DD7FC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80188554 00185354*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*80188558 00185358*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8018855C 0018535C*/ PPC::Runtime::ASM::bl(DCFlushRange);
/*80188560 00185360*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80188564 00185364*/ PPC::Runtime::ASM::beq(.L_801885D4);
/*80188568 00185368*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*8018856C 0018536C*/ PPC::Runtime::ASM::lhz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80188570 00185370*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80188574 00185374*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 16);
/*80188578 00185378*/ PPC::Runtime::ASM::subf(context->r0, context->r4, context->r0);
/*8018857C 0018537C*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80188580 00185380  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*80188584 00185384*/ PPC::Runtime::ASM::beq(.L_8018858C);
/*80188588 00185388*/ PPC::Runtime::ASM::b(.L_8018859C);
RUNTIME_PPC_JUMP_LABEL(.L_8018858C, 0x8018858C) //this is a jump label
/*8018858C 0018538C*/ PPC::Runtime::ASM::subi(context->r3, context->r4, 0x1);
/*80188590 00185390*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r4);
/*80188594 00185394*/ PPC::Runtime::ASM::sth(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80188598 00185398*/ PPC::Runtime::ASM::srwi(context->r0, context->r0, 5);
RUNTIME_PPC_JUMP_LABEL(.L_8018859C, 0x8018859C) //this is a jump label
/*8018859C 0018539C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*801885A0 001853A0*/ PPC::Runtime::ASM::beq(.L_801885D4);
/*801885A4 001853A4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*801885A8 001853A8*/ PPC::Runtime::ASM::beq(.L_801885D4);
/*801885AC 001853AC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801885B0 001853B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801885B4 001853B4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r4));
/*801885B8 001853B8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801885BC 001853BC*/ PPC::Runtime::ASM::bctrl();
/*801885C0 001853C0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801885C4 001853C4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801885C8 001853C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r4));
/*801885CC 001853CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801885D0 001853D0*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801885D4, 0x801885D4) //this is a jump label
/*801885D4 001853D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801885D8 001853D8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801885DC 001853DC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801885E0 001853E0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801885E4 001853E4*/ PPC::Runtime::ASM::blr();
}