//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80397970.hpp"
#include "fn_803973A4.hpp"



void fn_803973A4(PPC::Runtime::GCContext* context)
{
/*803973A4 003941A4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803973A8 003941A8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803973AC 003941AC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803973B0 003941B0*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803973B4 003941B4*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*803973B8 003941B8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*803973BC 003941BC*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803973C0 003941C0*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*803973C4 003941C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803973C8 003941C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*803973CC 003941CC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*803973D0 003941D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803973D4 003941D4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803973D8 003941D8*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*803973DC 003941DC*/ PPC::Runtime::ASM::b(.L_8039741C);
RUNTIME_PPC_JUMP_LABEL(.L_803973E0, 0x803973E0) //this is a jump label
/*803973E0 003941E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*803973E4 003941E4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*803973E8 003941E8*/ PPC::Runtime::ASM::bne(.L_80397404);
/*803973EC 003941EC*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*803973F0 003941F0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803973F4 003941F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803973F8 003941F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803973FC 003941FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397400 00394200*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397404, 0x80397404) //this is a jump label
/*80397404 00394204*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80397408 00394208*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*8039740C 0039420C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397410 00394210*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397414 00394214*/ PPC::Runtime::ASM::bctrl();
/*80397418 00394218*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039741C, 0x8039741C) //this is a jump label
/*8039741C 0039421C*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*80397420 00394220*/ PPC::Runtime::ASM::bne(.L_803973E0);
/*80397424 00394224*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80397428 00394228*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8039742C 0039422C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*80397430 00394230*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397434 00394234*/ PPC::Runtime::ASM::bctrl();
/*80397438 00394238*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*8039743C 0039423C*/ PPC::Runtime::ASM::b(.L_8039793C);
RUNTIME_PPC_JUMP_LABEL(.L_80397440, 0x80397440) //this is a jump label
/*80397440 00394240*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80397444 00394244*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80397448 00394248*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*8039744C 0039424C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*80397450 00394250*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80397454 00394254*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80397458 00394258*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*8039745C 0039425C*/ PPC::Runtime::ASM::b(.L_8039749C);
RUNTIME_PPC_JUMP_LABEL(.L_80397460, 0x80397460) //this is a jump label
/*80397460 00394260*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*80397464 00394264*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*80397468 00394268*/ PPC::Runtime::ASM::bne(.L_80397484);
/*8039746C 0039426C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397470 00394270*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80397474 00394274*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80397478 00394278*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039747C 0039427C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397480 00394280*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397484, 0x80397484) //this is a jump label
/*80397484 00394284*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397488 00394288*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8039748C 0039428C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397490 00394290*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397494 00394294*/ PPC::Runtime::ASM::bctrl();
/*80397498 00394298*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039749C, 0x8039749C) //this is a jump label
/*8039749C 0039429C*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*803974A0 003942A0*/ PPC::Runtime::ASM::bne(.L_80397460);
/*803974A4 003942A4*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*803974A8 003942A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*803974AC 003942AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803974B0 003942B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803974B4 003942B4*/ PPC::Runtime::ASM::bctrl();
/*803974B8 003942B8*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*803974BC 003942BC*/ PPC::Runtime::ASM::b(.L_80397908);
RUNTIME_PPC_JUMP_LABEL(.L_803974C0, 0x803974C0) //this is a jump label
/*803974C0 003942C0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803974C4 003942C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803974C8 003942C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*803974CC 003942CC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*803974D0 003942D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803974D4 003942D4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803974D8 003942D8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*803974DC 003942DC*/ PPC::Runtime::ASM::b(.L_8039751C);
RUNTIME_PPC_JUMP_LABEL(.L_803974E0, 0x803974E0) //this is a jump label
/*803974E0 003942E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*803974E4 003942E4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*803974E8 003942E8*/ PPC::Runtime::ASM::bne(.L_80397504);
/*803974EC 003942EC*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*803974F0 003942F0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803974F4 003942F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*803974F8 003942F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803974FC 003942FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397500 00394300*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397504, 0x80397504) //this is a jump label
/*80397504 00394304*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397508 00394308*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8039750C 0039430C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397510 00394310*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397514 00394314*/ PPC::Runtime::ASM::bctrl();
/*80397518 00394318*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039751C, 0x8039751C) //this is a jump label
/*8039751C 0039431C*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*80397520 00394320*/ PPC::Runtime::ASM::bne(.L_803974E0);
/*80397524 00394324*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80397528 00394328*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*8039752C 0039432C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*80397530 00394330*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397534 00394334*/ PPC::Runtime::ASM::bctrl();
/*80397538 00394338*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8039753C 0039433C*/ PPC::Runtime::ASM::b(.L_803978D4);
RUNTIME_PPC_JUMP_LABEL(.L_80397540, 0x80397540) //this is a jump label
/*80397540 00394340*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80397544 00394344*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80397548 00394348*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*8039754C 0039434C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*80397550 00394350*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80397554 00394354*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80397558 00394358*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*8039755C 0039435C*/ PPC::Runtime::ASM::b(.L_8039759C);
RUNTIME_PPC_JUMP_LABEL(.L_80397560, 0x80397560) //this is a jump label
/*80397560 00394360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*80397564 00394364*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*80397568 00394368*/ PPC::Runtime::ASM::bne(.L_80397584);
/*8039756C 0039436C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397570 00394370*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80397574 00394374*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80397578 00394378*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039757C 0039437C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397580 00394380*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397584, 0x80397584) //this is a jump label
/*80397584 00394384*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397588 00394388*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8039758C 0039438C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397590 00394390*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397594 00394394*/ PPC::Runtime::ASM::bctrl();
/*80397598 00394398*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039759C, 0x8039759C) //this is a jump label
/*8039759C 0039439C*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*803975A0 003943A0*/ PPC::Runtime::ASM::bne(.L_80397560);
/*803975A4 003943A4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803975A8 003943A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803975AC 003943AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803975B0 003943B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803975B4 003943B4*/ PPC::Runtime::ASM::bctrl();
/*803975B8 003943B8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803975BC 003943BC*/ PPC::Runtime::ASM::b(.L_803978A0);
RUNTIME_PPC_JUMP_LABEL(.L_803975C0, 0x803975C0) //this is a jump label
/*803975C0 003943C0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803975C4 003943C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803975C8 003943C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*803975CC 003943CC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*803975D0 003943D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803975D4 003943D4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803975D8 003943D8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*803975DC 003943DC*/ PPC::Runtime::ASM::b(.L_8039761C);
RUNTIME_PPC_JUMP_LABEL(.L_803975E0, 0x803975E0) //this is a jump label
/*803975E0 003943E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*803975E4 003943E4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*803975E8 003943E8*/ PPC::Runtime::ASM::bne(.L_80397604);
/*803975EC 003943EC*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*803975F0 003943F0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803975F4 003943F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*803975F8 003943F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803975FC 003943FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397600 00394400*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397604, 0x80397604) //this is a jump label
/*80397604 00394404*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397608 00394408*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8039760C 0039440C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397610 00394410*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397614 00394414*/ PPC::Runtime::ASM::bctrl();
/*80397618 00394418*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039761C, 0x8039761C) //this is a jump label
/*8039761C 0039441C*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*80397620 00394420*/ PPC::Runtime::ASM::bne(.L_803975E0);
/*80397624 00394424*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80397628 00394428*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039762C 0039442C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*80397630 00394430*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397634 00394434*/ PPC::Runtime::ASM::bctrl();
/*80397638 00394438*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8039763C 0039443C*/ PPC::Runtime::ASM::b(.L_8039786C);
RUNTIME_PPC_JUMP_LABEL(.L_80397640, 0x80397640) //this is a jump label
/*80397640 00394440*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80397644 00394444*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80397648 00394448*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*8039764C 0039444C*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*80397650 00394450*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80397654 00394454*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*80397658 00394458*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*8039765C 0039445C*/ PPC::Runtime::ASM::b(.L_8039769C);
RUNTIME_PPC_JUMP_LABEL(.L_80397660, 0x80397660) //this is a jump label
/*80397660 00394460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*80397664 00394464*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*80397668 00394468*/ PPC::Runtime::ASM::bne(.L_80397684);
/*8039766C 0039446C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397670 00394470*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80397674 00394474*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80397678 00394478*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039767C 0039447C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397680 00394480*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397684, 0x80397684) //this is a jump label
/*80397684 00394484*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397688 00394488*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8039768C 0039448C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397690 00394490*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397694 00394494*/ PPC::Runtime::ASM::bctrl();
/*80397698 00394498*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039769C, 0x8039769C) //this is a jump label
/*8039769C 0039449C*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*803976A0 003944A0*/ PPC::Runtime::ASM::bne(.L_80397660);
/*803976A4 003944A4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*803976A8 003944A8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*803976AC 003944AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803976B0 003944B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803976B4 003944B4*/ PPC::Runtime::ASM::bctrl();
/*803976B8 003944B8*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*803976BC 003944BC*/ PPC::Runtime::ASM::b(.L_80397838);
RUNTIME_PPC_JUMP_LABEL(.L_803976C0, 0x803976C0) //this is a jump label
/*803976C0 003944C0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DDAA0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803976C4 003944C4*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*803976C8 003944C8*/ PPC::Runtime::ASM::li(context->r5, lbl_805DC198 @ Get_MemoryOffset_SDA21);
/*803976CC 003944CC*/ PPC::Runtime::ASM::li(context->r6, lbl_805DC1A0 @ Get_MemoryOffset_SDA21);
/*803976D0 003944D0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*803976D4 003944D4*/ PPC::Runtime::ASM::bl(fn_803AD760);
/*803976D8 003944D8*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*803976DC 003944DC*/ PPC::Runtime::ASM::b(.L_8039771C);
RUNTIME_PPC_JUMP_LABEL(.L_803976E0, 0x803976E0) //this is a jump label
/*803976E0 003944E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r23));
/*803976E4 003944E4*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*803976E8 003944E8*/ PPC::Runtime::ASM::bne(.L_80397704);
/*803976EC 003944EC*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*803976F0 003944F0*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803976F4 003944F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*803976F8 003944F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*803976FC 003944FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397700 00394500*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397704, 0x80397704) //this is a jump label
/*80397704 00394504*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*80397708 00394508*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*8039770C 0039450C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*80397710 00394510*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397714 00394514*/ PPC::Runtime::ASM::bctrl();
/*80397718 00394518*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039771C, 0x8039771C) //this is a jump label
/*8039771C 0039451C*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80397720 00394520*/ PPC::Runtime::ASM::bne(.L_803976E0);
/*80397724 00394524*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397728 00394528*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*8039772C 0039452C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*80397730 00394530*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397734 00394534*/ PPC::Runtime::ASM::bctrl();
/*80397738 00394538*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
/*8039773C 0039453C*/ PPC::Runtime::ASM::b(.L_80397804);
RUNTIME_PPC_JUMP_LABEL(.L_80397740, 0x80397740) //this is a jump label
/*80397740 00394540*/ PPC::Runtime::ASM::bl(fn_80397970);
/*80397744 00394544*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*80397748 00394548*/ PPC::Runtime::ASM::b(.L_80397788);
RUNTIME_PPC_JUMP_LABEL(.L_8039774C, 0x8039774C) //this is a jump label
/*8039774C 0039454C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r22));
/*80397750 00394550*/ PPC::Runtime::ASM::cmplw(context->r0, context->r31);
/*80397754 00394554*/ PPC::Runtime::ASM::bne(.L_80397770);
/*80397758 00394558*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*8039775C 0039455C*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80397760 00394560*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*80397764 00394564*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*80397768 00394568*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039776C 0039456C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_80397770, 0x80397770) //this is a jump label
/*80397770 00394570*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*80397774 00394574*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*80397778 00394578*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r12));
/*8039777C 0039457C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397780 00394580*/ PPC::Runtime::ASM::bctrl();
/*80397784 00394584*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80397788, 0x80397788) //this is a jump label
/*80397788 00394588*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*8039778C 0039458C*/ PPC::Runtime::ASM::bne(.L_8039774C);
/*80397790 00394590*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*80397794 00394594*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*80397798 00394598*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r12));
/*8039779C 0039459C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803977A0 003945A0*/ PPC::Runtime::ASM::bctrl();
/*803977A4 003945A4*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
/*803977A8 003945A8*/ PPC::Runtime::ASM::b(.L_803977D0);
RUNTIME_PPC_JUMP_LABEL(.L_803977AC, 0x803977AC) //this is a jump label
/*803977AC 003945AC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803977B0 003945B0*/ PPC::Runtime::ASM::mr(context->r4, context->r22);
/*803977B4 003945B4*/ PPC::Runtime::ASM::bl(fn_803973A4);
/*803977B8 003945B8*/ PPC::Runtime::ASM::mr(context->r3, context->r22);
/*803977BC 003945BC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r22));
/*803977C0 003945C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803977C4 003945C4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803977C8 003945C8*/ PPC::Runtime::ASM::bctrl();
/*803977CC 003945CC*/ PPC::Runtime::ASM::mr(context->r22, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803977D0, 0x803977D0) //this is a jump label
/*803977D0 003945D0*/ PPC::Runtime::ASM::cmplwi(context->r22, 0x0);
/*803977D4 003945D4*/ PPC::Runtime::ASM::bne(.L_803977AC);
/*803977D8 003945D8*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*803977DC 003945DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*803977E0 003945E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*803977E4 003945E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803977E8 003945E8*/ PPC::Runtime::ASM::bctrl();
/*803977EC 003945EC*/ PPC::Runtime::ASM::mr(context->r3, context->r23);
/*803977F0 003945F0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r23));
/*803977F4 003945F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803977F8 003945F8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803977FC 003945FC*/ PPC::Runtime::ASM::bctrl();
/*80397800 00394600*/ PPC::Runtime::ASM::mr(context->r23, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80397804, 0x80397804) //this is a jump label
/*80397804 00394604*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*80397808 00394608*/ PPC::Runtime::ASM::bne(.L_80397740);
/*8039780C 0039460C*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397810 00394610*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80397814 00394614*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*80397818 00394618*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8039781C 0039461C*/ PPC::Runtime::ASM::bctrl();
/*80397820 00394620*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80397824 00394624*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r24));
/*80397828 00394628*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*8039782C 0039462C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397830 00394630*/ PPC::Runtime::ASM::bctrl();
/*80397834 00394634*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80397838, 0x80397838) //this is a jump label
/*80397838 00394638*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*8039783C 0039463C*/ PPC::Runtime::ASM::bne(.L_803976C0);
/*80397840 00394640*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80397844 00394644*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80397848 00394648*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*8039784C 0039464C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397850 00394650*/ PPC::Runtime::ASM::bctrl();
/*80397854 00394654*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80397858 00394658*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8039785C 0039465C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*80397860 00394660*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397864 00394664*/ PPC::Runtime::ASM::bctrl();
/*80397868 00394668*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039786C, 0x8039786C) //this is a jump label
/*8039786C 0039466C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80397870 00394670*/ PPC::Runtime::ASM::bne(.L_80397640);
/*80397874 00394674*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80397878 00394678*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8039787C 0039467C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*80397880 00394680*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397884 00394684*/ PPC::Runtime::ASM::bctrl();
/*80397888 00394688*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8039788C 0039468C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*80397890 00394690*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*80397894 00394694*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397898 00394698*/ PPC::Runtime::ASM::bctrl();
/*8039789C 0039469C*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803978A0, 0x803978A0) //this is a jump label
/*803978A0 003946A0*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*803978A4 003946A4*/ PPC::Runtime::ASM::bne(.L_803975C0);
/*803978A8 003946A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803978AC 003946AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803978B0 003946B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*803978B4 003946B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803978B8 003946B8*/ PPC::Runtime::ASM::bctrl();
/*803978BC 003946BC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803978C0 003946C0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*803978C4 003946C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803978C8 003946C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803978CC 003946CC*/ PPC::Runtime::ASM::bctrl();
/*803978D0 003946D0*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_803978D4, 0x803978D4) //this is a jump label
/*803978D4 003946D4*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*803978D8 003946D8*/ PPC::Runtime::ASM::bne(.L_80397540);
/*803978DC 003946DC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803978E0 003946E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803978E4 003946E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*803978E8 003946E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803978EC 003946EC*/ PPC::Runtime::ASM::bctrl();
/*803978F0 003946F0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*803978F4 003946F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803978F8 003946F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*803978FC 003946FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397900 00394700*/ PPC::Runtime::ASM::bctrl();
/*80397904 00394704*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80397908, 0x80397908) //this is a jump label
/*80397908 00394708*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*8039790C 0039470C*/ PPC::Runtime::ASM::bne(.L_803974C0);
/*80397910 00394710*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80397914 00394714*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*80397918 00394718*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*8039791C 0039471C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397920 00394720*/ PPC::Runtime::ASM::bctrl();
/*80397924 00394724*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80397928 00394728*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8039792C 0039472C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r12));
/*80397930 00394730*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397934 00394734*/ PPC::Runtime::ASM::bctrl();
/*80397938 00394738*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_8039793C, 0x8039793C) //this is a jump label
/*8039793C 0039473C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*80397940 00394740*/ PPC::Runtime::ASM::bne(.L_80397440);
/*80397944 00394744*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80397948 00394748*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*8039794C 0039474C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r12));
/*80397950 00394750*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80397954 00394754*/ PPC::Runtime::ASM::bctrl();
/*80397958 00394758*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*8039795C 0039475C*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*80397960 00394760*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80397964 00394764*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80397968 00394768*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8039796C 0039476C*/ PPC::Runtime::ASM::blr();
}