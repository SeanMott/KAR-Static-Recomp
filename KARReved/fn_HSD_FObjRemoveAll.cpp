//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_FObjRemoveAll.hpp"
#include "fn_HSD_FObjRemove.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"
#include "fn_HSD_FObjFree.hpp"



void fn_HSD_FObjRemoveAll(PPC::Runtime::GCContext* context)
{
/*804035F8 004003F8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*804035FC 004003FC*/ PPC::Runtime::ASM::mflr(context->r0);
/*80403600 00400400*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80403604 00400404*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80403608 00400408*/ PPC::Runtime::ASM::bl(_savegpr_23);
/* 8040360C 0040040C  7C 77 1B 79 */ mr. context->r23 , context->r3
/*80403610 00400410*/ PPC::Runtime::ASM::beq(.L_80403704);
/*80403614 00400414*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*80403618 00400418*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8040361C 0040041C*/ PPC::Runtime::ASM::beq(.L_804036F4);
/*80403620 00400420*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80403624 00400424*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80403628 00400428*/ PPC::Runtime::ASM::beq(.L_804036E4);
/*8040362C 0040042C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80403630 00400430*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*80403634 00400434*/ PPC::Runtime::ASM::beq(.L_804036D4);
/*80403638 00400438*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*8040363C 0040043C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80403640 00400440*/ PPC::Runtime::ASM::beq(.L_804036C4);
/*80403644 00400444*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80403648 00400448*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8040364C 0040044C*/ PPC::Runtime::ASM::beq(.L_804036B4);
/*80403650 00400450*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80403654 00400454*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80403658 00400458*/ PPC::Runtime::ASM::beq(.L_804036A4);
/*8040365C 0040045C*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80403660 00400460*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80403664 00400464*/ PPC::Runtime::ASM::beq(.L_80403694);
/*80403668 00400468*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8040366C 0040046C*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*80403670 00400470*/ PPC::Runtime::ASM::beq(.L_80403684);
/*80403674 00400474*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80403678 00400478*/ PPC::Runtime::ASM::bl(fn_HSD_FObjRemoveAll);
/*8040367C 0040047C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80403680 00400480*/ PPC::Runtime::ASM::bl(fn_HSD_FObjRemove);
RUNTIME_PPC_JUMP_LABEL(.L_80403684, 0x80403684) //this is a jump label
/*80403684 00400484*/ PPC::Runtime::ASM::cmplwi(context->r25, 0x0);
/*80403688 00400488*/ PPC::Runtime::ASM::beq(.L_80403694);
/*8040368C 0040048C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80403690 00400490*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80403694, 0x80403694) //this is a jump label
/*80403694 00400494*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80403698 00400498*/ PPC::Runtime::ASM::beq(.L_804036A4);
/*8040369C 0040049C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*804036A0 004004A0*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_804036A4, 0x804036A4) //this is a jump label
/*804036A4 004004A4*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*804036A8 004004A8*/ PPC::Runtime::ASM::beq(.L_804036B4);
/*804036AC 004004AC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*804036B0 004004B0*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_804036B4, 0x804036B4) //this is a jump label
/*804036B4 004004B4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*804036B8 004004B8*/ PPC::Runtime::ASM::beq(.L_804036C4);
/*804036BC 004004BC*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*804036C0 004004C0*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_804036C4, 0x804036C4) //this is a jump label
/*804036C4 004004C4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*804036C8 004004C8*/ PPC::Runtime::ASM::beq(.L_804036D4);
/*804036CC 004004CC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*804036D0 004004D0*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_804036D4, 0x804036D4) //this is a jump label
/*804036D4 004004D4*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*804036D8 004004D8*/ PPC::Runtime::ASM::beq(.L_804036E4);
/*804036DC 004004DC*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*804036E0 004004E0*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_804036E4, 0x804036E4) //this is a jump label
/*804036E4 004004E4*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*804036E8 004004E8*/ PPC::Runtime::ASM::beq(.L_804036F4);
/*804036EC 004004EC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*804036F0 004004F0*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_804036F4, 0x804036F4) //this is a jump label
/*804036F4 004004F4*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*804036F8 004004F8*/ PPC::Runtime::ASM::beq(.L_80403704);
/*804036FC 004004FC*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*80403700 00400500*/ PPC::Runtime::ASM::bl(fn_HSD_FObjFree);
RUNTIME_PPC_JUMP_LABEL(.L_80403704, 0x80403704) //this is a jump label
/*80403704 00400504*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80403708 00400508*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*8040370C 0040050C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80403710 00400510*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80403714 00400514*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80403718 00400518*/ PPC::Runtime::ASM::blr();
}