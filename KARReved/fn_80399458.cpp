//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"
#include "fn_8038CB28.hpp"



void fn_80399458(PPC::Runtime::GCContext* context)
{
/*80399458 00396258*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8039945C 0039625C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80399460 00396260*/ PPC::Runtime::ASM::cmplwi(context->r7, 0xe);
/*80399464 00396264*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80399468 00396268*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8039946C 0039626C*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*80399470 00396270*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80399474 00396274*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80399478 00396278*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8039947C 0039627C*/ PPC::Runtime::ASM::mr(context->r29, context->r6);
/*80399480 00396280*/ PPC::Runtime::ASM::bgt(.L_8039965C);
/*80399484 00396284*/ PPC::Runtime::ASM::lis(context->r3, jumptable_804F5A24 @ Get_MemoryOffset_HighBit);
/*80399488 00396288*/ PPC::Runtime::ASM::slwi(context->r0, context->r7, 2);
/*8039948C 0039628C*/ PPC::Runtime::ASM::addi(context->r3, context->r3, jumptable_804F5A24 @ Get_MemoryOffset_LowBit);
/*80399490 00396290*/ PPC::Runtime::ASM::lwzx(context->r0, context->r3, context->r0);
/*80399494 00396294*/ PPC::Runtime::ASM::mtctr(context->r0);
/*80399498 00396298*/ PPC::Runtime::ASM::bctr();
/*8039949C 0039629C*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*803994A0 003962A0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*803994A4 003962A4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803994A8 003962A8*/ PPC::Runtime::ASM::beq(.L_80399660);
/*803994AC 003962AC*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*803994B0 003962B0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5CF8 @ Get_MemoryOffset_HighBit);
/*803994B4 003962B4*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*803994B8 003962B8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803994BC 003962BC*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5CF8 @ Get_MemoryOffset_LowBit);
/*803994C0 003962C0*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803994C4 003962C4*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*803994C8 003962C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803994CC 003962CC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803994D0 003962D0*/ PPC::Runtime::ASM::b(.L_80399660);
/*803994D4 003962D4*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*803994D8 003962D8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*803994DC 003962DC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803994E0 003962E0*/ PPC::Runtime::ASM::beq(.L_80399660);
/*803994E4 003962E4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*803994E8 003962E8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5CA4 @ Get_MemoryOffset_HighBit);
/*803994EC 003962EC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*803994F0 003962F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803994F4 003962F4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5CA4 @ Get_MemoryOffset_LowBit);
/*803994F8 003962F8*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803994FC 003962FC*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80399500 00396300*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80399504 00396304*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80399508 00396308*/ PPC::Runtime::ASM::b(.L_80399660);
/*8039950C 0039630C*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80399510 00396310*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80399514 00396314*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80399518 00396318*/ PPC::Runtime::ASM::beq(.L_80399660);
/*8039951C 0039631C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399520 00396320*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5C50 @ Get_MemoryOffset_HighBit);
/*80399524 00396324*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399528 00396328*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039952C 0039632C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5C50 @ Get_MemoryOffset_LowBit);
/*80399530 00396330*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80399534 00396334*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80399538 00396338*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039953C 0039633C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80399540 00396340*/ PPC::Runtime::ASM::b(.L_80399660);
/*80399544 00396344*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80399548 00396348*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*8039954C 0039634C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80399550 00396350*/ PPC::Runtime::ASM::beq(.L_80399660);
/*80399554 00396354*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399558 00396358*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5BFC @ Get_MemoryOffset_HighBit);
/*8039955C 0039635C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399560 00396360*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80399564 00396364*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5BFC @ Get_MemoryOffset_LowBit);
/*80399568 00396368*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039956C 0039636C*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80399570 00396370*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80399574 00396374*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80399578 00396378*/ PPC::Runtime::ASM::b(.L_80399660);
/*8039957C 0039637C*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80399580 00396380*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*80399584 00396384*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80399588 00396388*/ PPC::Runtime::ASM::beq(.L_80399660);
/*8039958C 0039638C*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399590 00396390*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5BA8 @ Get_MemoryOffset_HighBit);
/*80399594 00396394*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399598 00396398*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039959C 0039639C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5BA8 @ Get_MemoryOffset_LowBit);
/*803995A0 003963A0*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803995A4 003963A4*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*803995A8 003963A8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803995AC 003963AC*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803995B0 003963B0*/ PPC::Runtime::ASM::b(.L_80399660);
/*803995B4 003963B4*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*803995B8 003963B8*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*803995BC 003963BC*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803995C0 003963C0*/ PPC::Runtime::ASM::beq(.L_80399660);
/*803995C4 003963C4*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*803995C8 003963C8*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5B54 @ Get_MemoryOffset_HighBit);
/*803995CC 003963CC*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*803995D0 003963D0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803995D4 003963D4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5B54 @ Get_MemoryOffset_LowBit);
/*803995D8 003963D8*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*803995DC 003963DC*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*803995E0 003963E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803995E4 003963E4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*803995E8 003963E8*/ PPC::Runtime::ASM::b(.L_80399660);
/*803995EC 003963EC*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*803995F0 003963F0*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*803995F4 003963F4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803995F8 003963F8*/ PPC::Runtime::ASM::beq(.L_80399660);
/*803995FC 003963FC*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399600 00396400*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5B00 @ Get_MemoryOffset_HighBit);
/*80399604 00396404*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399608 00396408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039960C 0039640C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5B00 @ Get_MemoryOffset_LowBit);
/*80399610 00396410*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80399614 00396414*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80399618 00396418*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*8039961C 0039641C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80399620 00396420*/ PPC::Runtime::ASM::b(.L_80399660);
/*80399624 00396424*/ PPC::Runtime::ASM::li(context->r3, 0xc);
/*80399628 00396428*/ PPC::Runtime::ASM::bl(fn_8038CB28);
/*8039962C 0039642C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80399630 00396430*/ PPC::Runtime::ASM::beq(.L_80399660);
/*80399634 00396434*/ PPC::Runtime::ASM::lis(context->r5, lbl_804F5174 @ Get_MemoryOffset_HighBit);
/*80399638 00396438*/ PPC::Runtime::ASM::lis(context->r4, lbl_804F5AAC @ Get_MemoryOffset_HighBit);
/*8039963C 0039643C*/ PPC::Runtime::ASM::addi(context->r0, context->r5, lbl_804F5174 @ Get_MemoryOffset_LowBit);
/*80399640 00396440*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80399644 00396444*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804F5AAC @ Get_MemoryOffset_LowBit);
/*80399648 00396448*/ PPC::Runtime::ASM::sth(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*8039964C 0039644C*/ PPC::Runtime::ASM::sth(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r3));
/*80399650 00396450*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80399654 00396454*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80399658 00396458*/ PPC::Runtime::ASM::b(.L_80399660);
RUNTIME_PPC_JUMP_LABEL(.L_8039965C, 0x8039965C) //this is a jump label
/*8039965C 0039645C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80399660, 0x80399660) //this is a jump label
/*80399660 00396460*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80399664 00396464*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80399668 00396468*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*8039966C 0039646C*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80399670 00396470*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80399674 00396474*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80399678 00396478*/ PPC::Runtime::ASM::blr();
}