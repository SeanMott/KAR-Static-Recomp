//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_803FC4C0(PPC::Runtime::GCContext* context)
{
/*803FC4C0 003F92C0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*803FC4C4 003F92C4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803FC4C8 003F92C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803FC4CC 003F92CC*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803FC4D0 003F92D0*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*803FC4D4 003F92D4*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*803FC4D8 003F92D8*/ PPC::Runtime::ASM::mr(context->r25, context->r5);
/*803FC4DC 003F92DC*/ PPC::Runtime::ASM::mr(context->r26, context->r6);
/*803FC4E0 003F92E0*/ PPC::Runtime::ASM::mr(context->r27, context->r7);
/*803FC4E4 003F92E4*/ PPC::Runtime::ASM::rlwinm(context->r31, context->r4, 0, 29, 29);
/*803FC4E8 003F92E8*/ PPC::Runtime::ASM::rlwinm(context->r30, context->r4, 0, 24, 24);
/*803FC4EC 003F92EC*/ PPC::Runtime::ASM::rlwinm(context->r29, context->r4, 0, 21, 21);
/*803FC4F0 003F92F0*/ PPC::Runtime::ASM::rlwinm(context->r28, context->r4, 0, 23, 23);
/*803FC4F4 003F92F4*/ PPC::Runtime::ASM::b(.L_803FCA40);
RUNTIME_PPC_JUMP_LABEL(.L_803FC4F8, 0x803FC4F8) //this is a jump label
/*803FC4F8 003F92F8*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x0);
/*803FC4FC 003F92FC*/ PPC::Runtime::ASM::beq(.L_803FC63C);
/*803FC500 003F9300*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r24));
/*803FC504 003F9304*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FC508 003F9308*/ PPC::Runtime::ASM::beq(.L_803FC63C);
/*803FC50C 003F930C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0xb);
/*803FC510 003F9310*/ PPC::Runtime::ASM::bgt(.L_803FC63C);
/*803FC514 003F9314*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502ED4 @ Get_MemoryOffset_HighBit);
/*803FC518 003F9318*/ PPC::Runtime::ASM::slwi(context->r0, context->r26, 2);
/*803FC51C 003F931C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502ED4 @ Get_MemoryOffset_LowBit);
/*803FC520 003F9320*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FC524 003F9324*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FC528 003F9328*/ PPC::Runtime::ASM::bctr();
/*803FC52C 003F932C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC530 003F9330*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC534 003F9334*/ PPC::Runtime::ASM::bctrl();
/*803FC538 003F9338*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC53C 003F933C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC540 003F9340*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC544 003F9344*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC548 003F9348*/ PPC::Runtime::ASM::bctrl();
/*803FC54C 003F934C*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC550 003F9350*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC554 003F9354*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC558 003F9358*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC55C 003F935C*/ PPC::Runtime::ASM::bctrl();
/*803FC560 003F9360*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC564 003F9364*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC568 003F9368*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC56C 003F936C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC570 003F9370*/ PPC::Runtime::ASM::bctrl();
/*803FC574 003F9374*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC578 003F9378*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC57C 003F937C*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC580 003F9380*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC584 003F9384*/ PPC::Runtime::ASM::bctrl();
/*803FC588 003F9388*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC58C 003F938C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC590 003F9390*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC594 003F9394*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803FC598 003F9398*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC59C 003F939C*/ PPC::Runtime::ASM::bctrl();
/*803FC5A0 003F93A0*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC5A4 003F93A4*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC5A8 003F93A8*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC5AC 003F93AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC5B0 003F93B0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC5B4 003F93B4*/ PPC::Runtime::ASM::bctrl();
/*803FC5B8 003F93B8*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC5BC 003F93BC*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC5C0 003F93C0*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC5C4 003F93C4*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC5C8 003F93C8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC5CC 003F93CC*/ PPC::Runtime::ASM::bctrl();
/*803FC5D0 003F93D0*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC5D4 003F93D4*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC5D8 003F93D8*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC5DC 003F93DC*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC5E0 003F93E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC5E4 003F93E4*/ PPC::Runtime::ASM::bctrl();
/*803FC5E8 003F93E8*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC5EC 003F93EC*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC5F0 003F93F0*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC5F4 003F93F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC5F8 003F93F8*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803FC5FC 003F93FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC600 003F9400*/ PPC::Runtime::ASM::bctrl();
/*803FC604 003F9404*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC608 003F9408*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC60C 003F940C*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC610 003F9410*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC614 003F9414*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803FC618 003F9418*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC61C 003F941C*/ PPC::Runtime::ASM::bctrl();
/*803FC620 003F9420*/ PPC::Runtime::ASM::b(.L_803FC63C);
/*803FC624 003F9424*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC628 003F9428*/ PPC::Runtime::ASM::mr(context->r4, context->r24);
/*803FC62C 003F942C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC630 003F9430*/ PPC::Runtime::ASM::li(context->r5, 0x3);
/*803FC634 003F9434*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC638 003F9438*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FC63C, 0x803FC63C) //this is a jump label
/*803FC63C 003F943C*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r24));
/*803FC640 003F9440*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*803FC644 003F9444*/ PPC::Runtime::ASM::beq(.L_803FC8E4);
/*803FC648 003F9448*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*803FC64C 003F944C*/ PPC::Runtime::ASM::beq(.L_803FC78C);
/*803FC650 003F9450*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r23));
/*803FC654 003F9454*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FC658 003F9458*/ PPC::Runtime::ASM::beq(.L_803FC78C);
/*803FC65C 003F945C*/ PPC::Runtime::ASM::cmplwi(context->r26, 0xb);
/*803FC660 003F9460*/ PPC::Runtime::ASM::bgt(.L_803FC78C);
/*803FC664 003F9464*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502EA4 @ Get_MemoryOffset_HighBit);
/*803FC668 003F9468*/ PPC::Runtime::ASM::slwi(context->r0, context->r26, 2);
/*803FC66C 003F946C*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502EA4 @ Get_MemoryOffset_LowBit);
/*803FC670 003F9470*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FC674 003F9474*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FC678 003F9478*/ PPC::Runtime::ASM::bctr();
/*803FC67C 003F947C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC680 003F9480*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC684 003F9484*/ PPC::Runtime::ASM::bctrl();
/*803FC688 003F9488*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC68C 003F948C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC690 003F9490*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC694 003F9494*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC698 003F9498*/ PPC::Runtime::ASM::bctrl();
/*803FC69C 003F949C*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC6A0 003F94A0*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC6A4 003F94A4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC6A8 003F94A8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC6AC 003F94AC*/ PPC::Runtime::ASM::bctrl();
/*803FC6B0 003F94B0*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC6B4 003F94B4*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC6B8 003F94B8*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC6BC 003F94BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC6C0 003F94C0*/ PPC::Runtime::ASM::bctrl();
/*803FC6C4 003F94C4*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC6C8 003F94C8*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC6CC 003F94CC*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC6D0 003F94D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC6D4 003F94D4*/ PPC::Runtime::ASM::bctrl();
/*803FC6D8 003F94D8*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC6DC 003F94DC*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC6E0 003F94E0*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC6E4 003F94E4*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*803FC6E8 003F94E8*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC6EC 003F94EC*/ PPC::Runtime::ASM::bctrl();
/*803FC6F0 003F94F0*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC6F4 003F94F4*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC6F8 003F94F8*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC6FC 003F94FC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC700 003F9500*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC704 003F9504*/ PPC::Runtime::ASM::bctrl();
/*803FC708 003F9508*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC70C 003F950C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC710 003F9510*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC714 003F9514*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC718 003F9518*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC71C 003F951C*/ PPC::Runtime::ASM::bctrl();
/*803FC720 003F9520*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC724 003F9524*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC728 003F9528*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC72C 003F952C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC730 003F9530*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC734 003F9534*/ PPC::Runtime::ASM::bctrl();
/*803FC738 003F9538*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC73C 003F953C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC740 003F9540*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC744 003F9544*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC748 003F9548*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*803FC74C 003F954C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC750 003F9550*/ PPC::Runtime::ASM::bctrl();
/*803FC754 003F9554*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC758 003F9558*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC75C 003F955C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC760 003F9560*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC764 003F9564*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*803FC768 003F9568*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC76C 003F956C*/ PPC::Runtime::ASM::bctrl();
/*803FC770 003F9570*/ PPC::Runtime::ASM::b(.L_803FC78C);
/*803FC774 003F9574*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC778 003F9578*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC77C 003F957C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC780 003F9580*/ PPC::Runtime::ASM::li(context->r5, 0x8);
/*803FC784 003F9584*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC788 003F9588*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FC78C, 0x803FC78C) //this is a jump label
/*803FC78C 003F958C*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
/*803FC790 003F9590*/ PPC::Runtime::ASM::b(.L_803FC8DC);
RUNTIME_PPC_JUMP_LABEL(.L_803FC794, 0x803FC794) //this is a jump label
/*803FC794 003F9594*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*803FC798 003F9598*/ PPC::Runtime::ASM::beq(.L_803FC8D8);
/*803FC79C 003F959C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r23));
/*803FC7A0 003F95A0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FC7A4 003F95A4*/ PPC::Runtime::ASM::beq(.L_803FC8D8);
/*803FC7A8 003F95A8*/ PPC::Runtime::ASM::cmplwi(context->r26, 0xb);
/*803FC7AC 003F95AC*/ PPC::Runtime::ASM::bgt(.L_803FC8D8);
/*803FC7B0 003F95B0*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502E74 @ Get_MemoryOffset_HighBit);
/*803FC7B4 003F95B4*/ PPC::Runtime::ASM::slwi(context->r0, context->r26, 2);
/*803FC7B8 003F95B8*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502E74 @ Get_MemoryOffset_LowBit);
/*803FC7BC 003F95BC*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FC7C0 003F95C0*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FC7C4 003F95C4*/ PPC::Runtime::ASM::bctr();
/*803FC7C8 003F95C8*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC7CC 003F95CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC7D0 003F95D0*/ PPC::Runtime::ASM::bctrl();
/*803FC7D4 003F95D4*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC7D8 003F95D8*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC7DC 003F95DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC7E0 003F95E0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC7E4 003F95E4*/ PPC::Runtime::ASM::bctrl();
/*803FC7E8 003F95E8*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC7EC 003F95EC*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC7F0 003F95F0*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC7F4 003F95F4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC7F8 003F95F8*/ PPC::Runtime::ASM::bctrl();
/*803FC7FC 003F95FC*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC800 003F9600*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC804 003F9604*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC808 003F9608*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC80C 003F960C*/ PPC::Runtime::ASM::bctrl();
/*803FC810 003F9610*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC814 003F9614*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC818 003F9618*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC81C 003F961C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC820 003F9620*/ PPC::Runtime::ASM::bctrl();
/*803FC824 003F9624*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC828 003F9628*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC82C 003F962C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC830 003F9630*/ PPC::Runtime::ASM::li(context->r5, 0xb);
/*803FC834 003F9634*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC838 003F9638*/ PPC::Runtime::ASM::bctrl();
/*803FC83C 003F963C*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC840 003F9640*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC844 003F9644*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC848 003F9648*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC84C 003F964C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC850 003F9650*/ PPC::Runtime::ASM::bctrl();
/*803FC854 003F9654*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC858 003F9658*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC85C 003F965C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC860 003F9660*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC864 003F9664*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC868 003F9668*/ PPC::Runtime::ASM::bctrl();
/*803FC86C 003F966C*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC870 003F9670*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC874 003F9674*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC878 003F9678*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC87C 003F967C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC880 003F9680*/ PPC::Runtime::ASM::bctrl();
/*803FC884 003F9684*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC888 003F9688*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC88C 003F968C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC890 003F9690*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC894 003F9694*/ PPC::Runtime::ASM::li(context->r5, 0xb);
/*803FC898 003F9698*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC89C 003F969C*/ PPC::Runtime::ASM::bctrl();
/*803FC8A0 003F96A0*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC8A4 003F96A4*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC8A8 003F96A8*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC8AC 003F96AC*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC8B0 003F96B0*/ PPC::Runtime::ASM::li(context->r5, 0xb);
/*803FC8B4 003F96B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC8B8 003F96B8*/ PPC::Runtime::ASM::bctrl();
/*803FC8BC 003F96BC*/ PPC::Runtime::ASM::b(.L_803FC8D8);
/*803FC8C0 003F96C0*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC8C4 003F96C4*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC8C8 003F96C8*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC8CC 003F96CC*/ PPC::Runtime::ASM::li(context->r5, 0xb);
/*803FC8D0 003F96D0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC8D4 003F96D4*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FC8D8, 0x803FC8D8) //this is a jump label
/*803FC8D8 003F96D8*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_803FC8DC, 0x803FC8DC) //this is a jump label
/*803FC8DC 003F96DC*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*803FC8E0 003F96E0*/ PPC::Runtime::ASM::bne(.L_803FC794);
RUNTIME_PPC_JUMP_LABEL(.L_803FC8E4, 0x803FC8E4) //this is a jump label
/*803FC8E4 003F96E4*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r24));
/*803FC8E8 003F96E8*/ PPC::Runtime::ASM::b(.L_803FCA34);
RUNTIME_PPC_JUMP_LABEL(.L_803FC8EC, 0x803FC8EC) //this is a jump label
/*803FC8EC 003F96EC*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*803FC8F0 003F96F0*/ PPC::Runtime::ASM::beq(.L_803FCA30);
/*803FC8F4 003F96F4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r23));
/*803FC8F8 003F96F8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803FC8FC 003F96FC*/ PPC::Runtime::ASM::beq(.L_803FCA30);
/*803FC900 003F9700*/ PPC::Runtime::ASM::cmplwi(context->r26, 0xb);
/*803FC904 003F9704*/ PPC::Runtime::ASM::bgt(.L_803FCA30);
/*803FC908 003F9708*/ PPC::Runtime::ASM::lis(context->r4, jumptable_80502E44 @ Get_MemoryOffset_HighBit);
/*803FC90C 003F970C*/ PPC::Runtime::ASM::slwi(context->r0, context->r26, 2);
/*803FC910 003F9710*/ PPC::Runtime::ASM::addi(context->r4, context->r4, jumptable_80502E44 @ Get_MemoryOffset_LowBit);
/*803FC914 003F9714*/ PPC::Runtime::ASM::lwzx(context->r0, context->r4, context->r0);
/*803FC918 003F9718*/ PPC::Runtime::ASM::mtctr(context->r0);
/*803FC91C 003F971C*/ PPC::Runtime::ASM::bctr();
/*803FC920 003F9720*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC924 003F9724*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC928 003F9728*/ PPC::Runtime::ASM::bctrl();
/*803FC92C 003F972C*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC930 003F9730*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC934 003F9734*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC938 003F9738*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC93C 003F973C*/ PPC::Runtime::ASM::bctrl();
/*803FC940 003F9740*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC944 003F9744*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC948 003F9748*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC94C 003F974C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC950 003F9750*/ PPC::Runtime::ASM::bctrl();
/*803FC954 003F9754*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC958 003F9758*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC95C 003F975C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC960 003F9760*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC964 003F9764*/ PPC::Runtime::ASM::bctrl();
/*803FC968 003F9768*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC96C 003F976C*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC970 003F9770*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC974 003F9774*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC978 003F9778*/ PPC::Runtime::ASM::bctrl();
/*803FC97C 003F977C*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC980 003F9780*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC984 003F9784*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC988 003F9788*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*803FC98C 003F978C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC990 003F9790*/ PPC::Runtime::ASM::bctrl();
/*803FC994 003F9794*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC998 003F9798*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC99C 003F979C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC9A0 003F97A0*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC9A4 003F97A4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC9A8 003F97A8*/ PPC::Runtime::ASM::bctrl();
/*803FC9AC 003F97AC*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC9B0 003F97B0*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC9B4 003F97B4*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC9B8 003F97B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC9BC 003F97BC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC9C0 003F97C0*/ PPC::Runtime::ASM::bctrl();
/*803FC9C4 003F97C4*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC9C8 003F97C8*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC9CC 003F97CC*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC9D0 003F97D0*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC9D4 003F97D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC9D8 003F97D8*/ PPC::Runtime::ASM::bctrl();
/*803FC9DC 003F97DC*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC9E0 003F97E0*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FC9E4 003F97E4*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FC9E8 003F97E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FC9EC 003F97EC*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*803FC9F0 003F97F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FC9F4 003F97F4*/ PPC::Runtime::ASM::bctrl();
/*803FC9F8 003F97F8*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FC9FC 003F97FC*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FCA00 003F9800*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FCA04 003F9804*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FCA08 003F9808*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*803FCA0C 003F980C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FCA10 003F9810*/ PPC::Runtime::ASM::bctrl();
/*803FCA14 003F9814*/ PPC::Runtime::ASM::b(.L_803FCA30);
/*803FCA18 003F9818*/ PPC::Runtime::ASM::mr(context->r12, context->r25);
/*803FCA1C 003F981C*/ PPC::Runtime::ASM::mr(context->r4, context->r23);
/*803FCA20 003F9820*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*803FCA24 003F9824*/ PPC::Runtime::ASM::li(context->r5, 0x9);
/*803FCA28 003F9828*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803FCA2C 003F982C*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_803FCA30, 0x803FCA30) //this is a jump label
/*803FCA30 003F9830*/ PPC::Runtime::ASM::lwz(context->r23, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r23));
RUNTIME_PPC_JUMP_LABEL(.L_803FCA34, 0x803FCA34) //this is a jump label
/*803FCA34 003F9834*/ PPC::Runtime::ASM::cmplwi(context->r23, 0x0);
/*803FCA38 003F9838*/ PPC::Runtime::ASM::bne(.L_803FC8EC);
/*803FCA3C 003F983C*/ PPC::Runtime::ASM::lwz(context->r24, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r24));
RUNTIME_PPC_JUMP_LABEL(.L_803FCA40, 0x803FCA40) //this is a jump label
/*803FCA40 003F9840*/ PPC::Runtime::ASM::cmplwi(context->r24, 0x0);
/*803FCA44 003F9844*/ PPC::Runtime::ASM::bne(.L_803FC4F8);
/*803FCA48 003F9848*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*803FCA4C 003F984C*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*803FCA50 003F9850*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*803FCA54 003F9854*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803FCA58 003F9858*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*803FCA5C 003F985C*/ PPC::Runtime::ASM::blr();
}