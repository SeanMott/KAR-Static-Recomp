//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802B57F4.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_803124F0.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"
#include "fn_8034D1F8.hpp"
#include "fn_802BE1B8.hpp"



void fn_803675A8(PPC::Runtime::GCContext* context)
{
/*803675A8 003643A8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803675AC 003643AC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803675B0 003643B0*/ PPC::Runtime::ASM::lis(context->r4, lbl_804EBCB0 @ Get_MemoryOffset_HighBit);
/*803675B4 003643B4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803675B8 003643B8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803675BC 003643BC*/ PPC::Runtime::ASM::addi(context->r31, context->r4, lbl_804EBCB0 @ Get_MemoryOffset_LowBit);
/*803675C0 003643C0*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd54);
/*803675C4 003643C4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803675C8 003643C8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803675CC 003643CC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803675D0 003643D0*/ PPC::Runtime::ASM::bl(fn_802B57F4);
/*803675D4 003643D4*/ PPC::Runtime::ASM::lis(context->r3, lbl_804C196C @ Get_MemoryOffset_HighBit);
/*803675D8 003643D8*/ PPC::Runtime::ASM::addi(context->r4, context->r3, lbl_804C196C @ Get_MemoryOffset_LowBit);
/*803675DC 003643DC*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*803675E0 003643E0*/ PPC::Runtime::ASM::addi(context->r3, context->r4, 0x10);
/*803675E4 003643E4*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x58);
/*803675E8 003643E8*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*803675EC 003643EC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r30));
/*803675F0 003643F0*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803675F4 003643F4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803675F8 003643F8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803675FC 003643FC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4730 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367600 00364400*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1ac);
/*80367604 00364404*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x4d4);
/*80367608 00364408*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x538);
/*8036760C 0036440C*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80367610 00364410*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367614 00364414*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80367618 00364418*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036761C 0036441C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367620 00364420*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367624 00364424*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b0);
/*80367628 00364428*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd64);
/*8036762C 0036442C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x53c);
/*80367630 00364430*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80367634 00364434*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367638 00364438*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036763C 0036443C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367640 00364440*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367644 00364444*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4724 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367648 00364448*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3b4);
/*8036764C 0036444C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd80);
/*80367650 00364450*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x540);
/*80367654 00364454*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80367658 00364458*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*8036765C 0036445C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80367660 00364460*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367664 00364464*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4714 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367668 00364468*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4724 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036766C 0036446C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4b8);
/*80367670 00364470*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xd94);
/*80367674 00364474*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x544);
/*80367678 00364478*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8036767C 0036447C*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367680 00364480*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80367684 00364484*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367688 00364488*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036768C 0036448C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4784 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367690 00364490*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5bc);
/*80367694 00364494*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xda8);
/*80367698 00364498*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x548);
/*8036769C 0036449C*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803676A0 003644A0*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803676A4 003644A4*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803676A8 003644A8*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803676AC 003644AC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803676B0 003644B0*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4784 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803676B4 003644B4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c0);
/*803676B8 003644B8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdb8);
/*803676BC 003644BC*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x54c);
/*803676C0 003644C0*/ PPC::Runtime::ASM::li(context->r5, 0x2);
/*803676C4 003644C4*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803676C8 003644C8*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803676CC 003644CC*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803676D0 003644D0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803676D4 003644D4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803676D8 003644D8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7c4);
/*803676DC 003644DC*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdc8);
/*803676E0 003644E0*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x550);
/*803676E4 003644E4*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*803676E8 003644E8*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803676EC 003644EC*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803676F0 003644F0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803676F4 003644F4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803676F8 003644F8*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E478C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803676FC 003644FC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8c8);
/*80367700 00364500*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdd4);
/*80367704 00364504*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x554);
/*80367708 00364508*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*8036770C 0036450C*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367710 00364510*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80367714 00364514*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367718 00364518*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036771C 0036451C*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367720 00364520*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9cc);
/*80367724 00364524*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xdec);
/*80367728 00364528*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x558);
/*8036772C 0036452C*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80367730 00364530*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367734 00364534*/ PPC::Runtime::ASM::bl(fn_803124F0);
/*80367738 00364538*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*8036773C 0036453C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4790 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367740 00364540*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4788 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367744 00364544*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad0);
/*80367748 00364548*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xe00);
/*8036774C 0036454C*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x1c);
/*80367750 00364550*/ PPC::Runtime::ASM::li(context->r5, 0x1);
/*80367754 00364554*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*80367758 00364558*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8036775C 0036455C*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367760 00364560*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367764 00364564*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4740 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367768 00364568*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbd4);
/*8036776C 0036456C*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xe10);
/*80367770 00364570*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x55c);
/*80367774 00364574*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80367778 00364578*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*8036777C 0036457C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*80367780 00364580*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*80367784 00364584*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80367788 00364588*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4720 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8036778C 0036458C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xcd8);
/*80367790 00364590*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xe24);
/*80367794 00364594*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x560);
/*80367798 00364598*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*8036779C 0036459C*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803677A0 003645A0*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*803677A4 003645A4*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*803677A8 003645A8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E4710 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803677AC 003645AC*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E4728 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803677B0 003645B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xddc);
/*803677B4 003645B4*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0xe30);
/*803677B8 003645B8*/ PPC::Runtime::ASM::addi(context->r6, context->r5, 0x564);
/*803677BC 003645BC*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*803677C0 003645C0*/ PPC::Runtime::ASM::bl(fn_802BE1B8);
/*803677C4 003645C4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x1b4);
/*803677C8 003645C8*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x16c);
/*803677CC 003645CC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1b4, context->r30));
/*803677D0 003645D0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803677D4 003645D4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803677D8 003645D8*/ PPC::Runtime::ASM::bctrl();
/*803677DC 003645DC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2b8);
/*803677E0 003645E0*/ PPC::Runtime::ASM::addi(context->r29, context->r30, 0x16c);
/*803677E4 003645E4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b8, context->r30));
/*803677E8 003645E8*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803677EC 003645EC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803677F0 003645F0*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803677F4 003645F4*/ PPC::Runtime::ASM::bctrl();
/*803677F8 003645F8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x3bc);
/*803677FC 003645FC*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80367800 00364600*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3bc, context->r30));
/*80367804 00364604*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80367808 00364608*/ PPC::Runtime::ASM::mtctr(context->r12);
/*8036780C 0036460C*/ PPC::Runtime::ASM::bctrl();
/*80367810 00364610*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c0, context->r30));
/*80367814 00364614*/ PPC::Runtime::ASM::mr(context->r31, context->r29);
/*80367818 00364618*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4c0);
/*8036781C 0036461C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80367820 00364620*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80367824 00364624*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367828 00364628*/ PPC::Runtime::ASM::bctrl();
/*8036782C 0036462C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x5c4);
/*80367830 00364630*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80367834 00364634*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c4, context->r30));
/*80367838 00364638*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036783C 0036463C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367840 00364640*/ PPC::Runtime::ASM::bctrl();
/*80367844 00364644*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x6c8);
/*80367848 00364648*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8036784C 0036464C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c8, context->r30));
/*80367850 00364650*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80367854 00364654*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367858 00364658*/ PPC::Runtime::ASM::bctrl();
/*8036785C 0036465C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x7cc);
/*80367860 00364660*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80367864 00364664*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7cc, context->r30));
/*80367868 00364668*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036786C 0036466C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367870 00364670*/ PPC::Runtime::ASM::bctrl();
/*80367874 00364674*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x8d0);
/*80367878 00364678*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*8036787C 0036467C*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8d0, context->r30));
/*80367880 00364680*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*80367884 00364684*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367888 00364688*/ PPC::Runtime::ASM::bctrl();
/*8036788C 0036468C*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x9d4);
/*80367890 00364690*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*80367894 00364694*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9d4, context->r30));
/*80367898 00364698*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*8036789C 0036469C*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803678A0 003646A0*/ PPC::Runtime::ASM::bctrl();
/*803678A4 003646A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xad8);
/*803678A8 003646A8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803678AC 003646AC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xad8, context->r30));
/*803678B0 003646B0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803678B4 003646B4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803678B8 003646B8*/ PPC::Runtime::ASM::bctrl();
/*803678BC 003646BC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xbdc);
/*803678C0 003646C0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803678C4 003646C4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbdc, context->r30));
/*803678C8 003646C8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803678CC 003646CC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803678D0 003646D0*/ PPC::Runtime::ASM::bctrl();
/*803678D4 003646D4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xce0);
/*803678D8 003646D8*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*803678DC 003646DC*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xce0, context->r30));
/*803678E0 003646E0*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803678E4 003646E4*/ PPC::Runtime::ASM::mtctr(context->r12);
/*803678E8 003646E8*/ PPC::Runtime::ASM::bctrl();
/*803678EC 003646EC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0xde4);
/*803678F0 003646F0*/ PPC::Runtime::ASM::mr(context->r4, context->r29);
/*803678F4 003646F4*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xde4, context->r30));
/*803678F8 003646F8*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r12));
/*803678FC 003646FC*/ PPC::Runtime::ASM::mtctr(context->r12);
/*80367900 00364700*/ PPC::Runtime::ASM::bctrl();
/*80367904 00364704*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80367908 00364708*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8036790C 0036470C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80367910 00364710*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80367914 00364714*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80367918 00364718*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8036791C 0036471C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80367920 00364720*/ PPC::Runtime::ASM::blr();
}