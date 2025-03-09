//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_AObjRemove.hpp"
#include "fn_HSD_AObjLoadDesc.hpp"
#include "fn_HSD_RObjAddAnimAll.hpp"
#include "fn_HSD_JObjSetFlags?.hpp"
#include "fn_HSD_JObjSetFlags?2.hpp"
#include "fn_HSD_DObjAddAnimAll.hpp"



void fn_HSD_JObjAddAnim(PPC::Runtime::GCContext* context)
{
/*80409340 00406140*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80409344 00406144*/ PPC::Runtime::ASM::mflr(context->r0);
/*80409348 00406148*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8040934C 0040614C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 80409350 00406150  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*80409354 00406154*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80409358 00406158*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*8040935C 0040615C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80409360 00406160*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80409364 00406164*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80409368 00406168*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*8040936C 0040616C*/ PPC::Runtime::ASM::beq(.L_80409460);
/*80409370 00406170*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80409374 00406174*/ PPC::Runtime::ASM::beq(.L_8040941C);
/*80409378 00406178*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*8040937C 0040617C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80409380 00406180*/ PPC::Runtime::ASM::beq(.L_80409388);
/*80409384 00406184*/ PPC::Runtime::ASM::bl(fn_HSD_AObjRemove);
RUNTIME_PPC_JUMP_LABEL(.L_80409388, 0x80409388) //this is a jump label
/*80409388 00406188*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*8040938C 0040618C*/ PPC::Runtime::ASM::bl(fn_HSD_AObjLoadDesc);
/*80409390 00406190*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80409394 00406194*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7c, context->r31));
/*80409398 00406198*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*8040939C 0040619C*/ PPC::Runtime::ASM::beq(.L_804093E8);
/*804093A0 004061A0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*804093A4 004061A4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*804093A8 004061A8*/ PPC::Runtime::ASM::beq(.L_804093E8);
/*804093AC 004061AC*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x14);
/*804093B0 004061B0*/ PPC::Runtime::ASM::b(.L_804093DC);
RUNTIME_PPC_JUMP_LABEL(.L_804093B4, 0x804093B4) //this is a jump label
/*804093B4 004061B4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x13, context->r5));
/*804093B8 004061B8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xc);
/*804093BC 004061BC*/ PPC::Runtime::ASM::bne(.L_804093D8);
/*804093C0 004061C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804093C4 004061C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804093C8 004061C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*804093CC 004061CC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*804093D0 004061D0*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r4));
/*804093D4 004061D4*/ PPC::Runtime::ASM::b(.L_804093E8);
RUNTIME_PPC_JUMP_LABEL(.L_804093D8, 0x804093D8) //this is a jump label
/*804093D8 004061D8*/ PPC::Runtime::ASM::mr(context->r3, context->r5);
RUNTIME_PPC_JUMP_LABEL(.L_804093DC, 0x804093DC) //this is a jump label
/*804093DC 004061DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*804093E0 004061E0*/ PPC::Runtime::ASM::cmplwi(context->r5, 0x0);
/*804093E4 004061E4*/ PPC::Runtime::ASM::bne(.L_804093B4);
RUNTIME_PPC_JUMP_LABEL(.L_804093E8, 0x804093E8) //this is a jump label
/*804093E8 004061E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x80, context->r31));
/*804093EC 004061EC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r28));
/*804093F0 004061F0*/ PPC::Runtime::ASM::bl(fn_HSD_RObjAddAnimAll);
/*804093F4 004061F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r28));
/* 804093F8 004061F8  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*804093FC 004061FC*/ PPC::Runtime::ASM::beq(.L_80409410);
/*80409400 00406200*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80409404 00406204*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80409408 00406208*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?);
/*8040940C 0040620C*/ PPC::Runtime::ASM::b(.L_8040941C);
RUNTIME_PPC_JUMP_LABEL(.L_80409410, 0x80409410) //this is a jump label
/*80409410 00406210*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80409414 00406214*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80409418 00406218*/ PPC::Runtime::ASM::bl(fn_HSD_JObjSetFlags?2);
RUNTIME_PPC_JUMP_LABEL(.L_8040941C, 0x8040941C) //this is a jump label
/*8040941C 0040621C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80409420 00406220*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x4020);
/*80409424 00406224*/ PPC::Runtime::ASM::cntlzw(context->r0, context->r0);
/* 80409428 00406228  54 00 D9 7F */ srwi. context->r0 , context->r0 , 5
/*8040942C 0040622C*/ PPC::Runtime::ASM::beq(.L_80409460);
/*80409430 00406230*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80409434 00406234*/ PPC::Runtime::ASM::beq(.L_80409440);
/*80409438 00406238*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*8040943C 0040623C*/ PPC::Runtime::ASM::b(.L_80409444);
RUNTIME_PPC_JUMP_LABEL(.L_80409440, 0x80409440) //this is a jump label
/*80409440 00406240*/ PPC::Runtime::ASM::li(context->r5, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80409444, 0x80409444) //this is a jump label
/*80409444 00406244*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80409448 00406248*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*8040944C 0040624C*/ PPC::Runtime::ASM::beq(.L_80409458);
/*80409450 00406250*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r29));
/*80409454 00406254*/ PPC::Runtime::ASM::b(.L_8040945C);
RUNTIME_PPC_JUMP_LABEL(.L_80409458, 0x80409458) //this is a jump label
/*80409458 00406258*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8040945C, 0x8040945C) //this is a jump label
/*8040945C 0040625C*/ PPC::Runtime::ASM::bl(fn_HSD_DObjAddAnimAll);
RUNTIME_PPC_JUMP_LABEL(.L_80409460, 0x80409460) //this is a jump label
/*80409460 00406260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80409464 00406264*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80409468 00406268*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8040946C 0040626C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80409470 00406270*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80409474 00406274*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80409478 00406278*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8040947C 0040627C*/ PPC::Runtime::ASM::blr();
}