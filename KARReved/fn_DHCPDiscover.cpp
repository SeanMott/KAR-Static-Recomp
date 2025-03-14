//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_UDPCancel.hpp"
#include "fn_OSCancelAlarm.hpp"
#include "memmove.hpp"
#include "memmove.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "memmove.hpp"
#include "memset.hpp"
#include "memset.hpp"
#include "memmove.hpp"
#include "fn_UDPSendAsync.hpp"
#include "OSGetTick.hpp"
#include "fn_RxmitHandler.hpp"
#include "fn_RxmitHandler.hpp"
#include "OSSetAlarm.hpp"
#include "fn_RecvCallback.hpp"
#include "fn_RecvCallback.hpp"
#include "fn_UDPReceiveAsync.hpp"



void fn_DHCPDiscover(PPC::Runtime::GCContext* context)
{
/*804787D8 004755D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804787DC 004755DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*804787E0 004755E0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*804787E4 004755E4*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*804787E8 004755E8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*804787EC 004755EC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf0, context->r3));
/*804787F0 004755F0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804787F4 004755F4*/ PPC::Runtime::ASM::beq(.L_80478800);
/*804787F8 004755F8*/ PPC::Runtime::ASM::li(context->r3, -0xc);
/*804787FC 004755FC*/ PPC::Runtime::ASM::b(.L_80478A88);
RUNTIME_PPC_JUMP_LABEL(.L_80478800, 0x80478800) //this is a jump label
/*80478800 00475600*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80478804 00475604*/ PPC::Runtime::ASM::bl(fn_UDPCancel);
/*80478808 00475608*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x328);
/*8047880C 0047560C*/ PPC::Runtime::ASM::bl(fn_OSCancelAlarm);
/*80478810 00475610*/ PPC::Runtime::ASM::addi(context->r26, context->r30, 0x1f0);
/*80478814 00475614*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80478818 00475618*/ PPC::Runtime::ASM::li(context->r4, MemoryOffset_253 @ Get_MemoryOffset_SDA21);
/*8047881C 0047561C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80478820 00475620*/ PPC::Runtime::ASM::bl(memmove);
/*80478824 00475624*/ PPC::Runtime::ASM::li(context->r0, 0x35);
/*80478828 00475628*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r26));
/*8047882C 0047562C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80478830 00475630*/ PPC::Runtime::ASM::lis(context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_HighBit);
/*80478834 00475634*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5, context->r26));
/*80478838 00475638*/ PPC::Runtime::ASM::addi(context->r3, context->r3, STRUCT_BYTE4_COUNT_1805BDD20 @ Get_MemoryOffset_LowBit);
/*8047883C 0047563C*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x38);
/*80478840 00475640*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r26));
/*80478844 00475644*/ PPC::Runtime::ASM::li(context->r0, 0x3d);
/*80478848 00475648*/ PPC::Runtime::ASM::li(context->r28, 0x7);
/*8047884C 0047564C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r26));
/*80478850 00475650*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80478854 00475654*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80478858 00475658*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8047885C 0047565C*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r26));
/*80478860 00475660*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0xa);
/*80478864 00475664*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x0);
/*80478868 00475668*/ PPC::Runtime::ASM::bl(memmove);
/*8047886C 0047566C*/ PPC::Runtime::ASM::li(context->r0, 0x37);
/*80478870 00475670*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6, context->r26));
/*80478874 00475674*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80478878 00475678*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*8047887C 0047567C*/ PPC::Runtime::ASM::stb(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x7, context->r26));
/*80478880 00475680*/ PPC::Runtime::ASM::li(context->r3, 0x1a);
/*80478884 00475684*/ PPC::Runtime::ASM::addi(context->r5, context->r26, 0x6);
/*80478888 00475688*/ PPC::Runtime::ASM::stb(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*8047888C 0047568C*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r26));
/*80478890 00475690*/ PPC::Runtime::ASM::li(context->r4, 0x1c);
/*80478894 00475694*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r26));
/*80478898 00475698*/ PPC::Runtime::ASM::li(context->r0, 0x3a);
/*8047889C 0047569C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r26));
/*804788A0 004756A0*/ PPC::Runtime::ASM::li(context->r3, 0x3b);
/*804788A4 004756A4*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r26));
/*804788A8 004756A8*/ PPC::Runtime::ASM::li(context->r4, 0xff);
/*804788AC 004756AC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r26));
/*804788B0 004756B0*/ PPC::Runtime::ASM::addi(context->r0, context->r30, 0x104);
/*804788B4 004756B4*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r26));
/*804788B8 004756B8*/ PPC::Runtime::ASM::addi(context->r3, context->r5, 0xa);
/*804788BC 004756BC*/ PPC::Runtime::ASM::subf(context->r0, context->r0, context->r3);
/*804788C0 004756C0*/ PPC::Runtime::ASM::stb(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r26));
/*804788C4 004756C4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r30));
/*804788C8 004756C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r30));
/*804788CC 004756CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x12c);
/*804788D0 004756D0*/ PPC::Runtime::ASM::bge(.L_804788E8);
/*804788D4 004756D4*/ PPC::Runtime::ASM::subfic(context->r5, context->r0, 0x12c);
/*804788D8 004756D8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*804788DC 004756DC*/ PPC::Runtime::ASM::bl(memset);
/*804788E0 004756E0*/ PPC::Runtime::ASM::li(context->r0, 0x12c);
/*804788E4 004756E4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804788E8, 0x804788E8) //this is a jump label
/*804788E8 004756E8*/ PPC::Runtime::ASM::addi(context->r26, context->r30, 0x104);
/*804788EC 004756EC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*804788F0 004756F0*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x104, context->r30));
/*804788F4 004756F4*/ PPC::Runtime::ASM::li(context->r0, 0x6);
/*804788F8 004756F8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*804788FC 004756FC*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x105, context->r30));
/*80478900 00475700*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0xc);
/*80478904 00475704*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80478908 00475708*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x106, context->r30));
/*8047890C 0047570C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80478910 00475710*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x107, context->r30));
/*80478914 00475714*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf4, context->r30));
/*80478918 00475718*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x108, context->r30));
/*8047891C 0047571C*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10c, context->r30));
/*80478920 00475720*/ PPC::Runtime::ASM::sth(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10e, context->r30));
/*80478924 00475724*/ PPC::Runtime::ASM::bl(memset);
/*80478928 00475728*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x10);
/*8047892C 0047572C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80478930 00475730*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80478934 00475734*/ PPC::Runtime::ASM::bl(memset);
/*80478938 00475738*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x14);
/*8047893C 0047573C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80478940 00475740*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80478944 00475744*/ PPC::Runtime::ASM::bl(memset);
/*80478948 00475748*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x18);
/*8047894C 0047574C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80478950 00475750*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*80478954 00475754*/ PPC::Runtime::ASM::bl(memset);
/*80478958 00475758*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*8047895C 0047575C*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x1c);
/*80478960 00475760*/ PPC::Runtime::ASM::li(context->r5, 0x6);
/*80478964 00475764*/ PPC::Runtime::ASM::bl(memmove);
/*80478968 00475768*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x2c);
/*8047896C 0047576C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80478970 00475770*/ PPC::Runtime::ASM::li(context->r5, 0x40);
/*80478974 00475774*/ PPC::Runtime::ASM::bl(memset);
/*80478978 00475778*/ PPC::Runtime::ASM::addi(context->r3, context->r26, 0x6c);
/*8047897C 0047577C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80478980 00475780*/ PPC::Runtime::ASM::li(context->r5, 0x80);
/*80478984 00475784*/ PPC::Runtime::ASM::bl(memset);
/*80478988 00475788*/ PPC::Runtime::ASM::li(context->r0, 0x8);
/*8047898C 0047578C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80478990 00475790*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80478994 00475794*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x24);
/*80478998 00475798*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x21, context->r1));
/*8047899C 0047579C*/ PPC::Runtime::ASM::li(context->r4, STRUCT_BYTE4_COUNT_1805E62A0 @ Get_MemoryOffset_SDA21);
/*804789A0 004757A0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*804789A4 004757A4*/ PPC::Runtime::ASM::bl(memmove);
/*804789A8 004757A8*/ PPC::Runtime::ASM::li(context->r0, 0x43);
/*804789AC 004757AC*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r1));
/*804789B0 004757B0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*804789B4 004757B4*/ PPC::Runtime::ASM::addi(context->r4, context->r26, 0x0);
/*804789B8 004757B8*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x31c, context->r30));
/*804789BC 004757BC*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x20);
/*804789C0 004757C0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*804789C4 004757C4*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*804789C8 004757C8*/ PPC::Runtime::ASM::bl(fn_UDPSendAsync);
/*804789CC 004757CC*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x324, context->r30));
/*804789D0 004757D0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*804789D4 004757D4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x320, context->r30));
/*804789D8 004757D8*/ PPC::Runtime::ASM::cmpw(context->r4, context->r0);
/*804789DC 004757DC*/ PPC::Runtime::ASM::bgt(.L_804789EC);
/*804789E0 004757E0*/ PPC::Runtime::ASM::li(context->r0, 0x4);
/*804789E4 004757E4*/ PPC::Runtime::ASM::slw(context->r5, context->r0, context->r4);
/*804789E8 004757E8*/ PPC::Runtime::ASM::b(.L_804789F0);
RUNTIME_PPC_JUMP_LABEL(.L_804789EC, 0x804789EC) //this is a jump label
/*804789EC 004757EC*/ PPC::Runtime::ASM::li(context->r5, 0x40);
RUNTIME_PPC_JUMP_LABEL(.L_804789F0, 0x804789F0) //this is a jump label
/*804789F0 004757F0*/ PPC::Runtime::ASM::lis(context->r28, 0x8000);
/*804789F4 004757F4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r28));
/*804789F8 004757F8*/ PPC::Runtime::ASM::srawi(context->r3, context->r5, 31);
/*804789FC 004757FC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80478A00 00475800*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 2);
/*80478A04 00475804*/ PPC::Runtime::ASM::mullw(context->r3, context->r3, context->r4);
/*80478A08 00475808*/ PPC::Runtime::ASM::mulhwu(context->r0, context->r5, context->r4);
/*80478A0C 0047580C*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80478A10 00475810*/ PPC::Runtime::ASM::mullw(context->r0, context->r5, context->r29);
/*80478A14 00475814*/ PPC::Runtime::ASM::mullw(context->r26, context->r5, context->r4);
/*80478A18 00475818*/ PPC::Runtime::ASM::add(context->r27, context->r3, context->r0);
/*80478A1C 0047581C*/ PPC::Runtime::ASM::bl(OSGetTick);
/*80478A20 00475820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf8, context->r28));
/*80478A24 00475824*/ PPC::Runtime::ASM::clrlwi(context->r6, context->r3, 27);
/* 80478A28 00475828  5C 65 30 3E */ rotlw context->r5 , context->r3 , context->r6
/*80478A2C 0047582C*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 31, 1, 30);
/*80478A30 00475830*/ PPC::Runtime::ASM::srwi(context->r4, context->r0, 2);
/*80478A34 00475834*/ PPC::Runtime::ASM::divwu(context->r0, context->r5, context->r3);
/*80478A38 00475838*/ PPC::Runtime::ASM::mullw(context->r0, context->r0, context->r3);
/*80478A3C 0047583C*/ PPC::Runtime::ASM::subf(context->r5, context->r0, context->r5);
/*80478A40 00475840*/ PPC::Runtime::ASM::addc(context->r3, context->r26, context->r5);
/*80478A44 00475844*/ PPC::Runtime::ASM::adde(context->r0, context->r27, context->r29);
/*80478A48 00475848*/ PPC::Runtime::ASM::subfc(context->r6, context->r4, context->r3);
/*80478A4C 0047584C*/ PPC::Runtime::ASM::lis(context->r3, fn_RxmitHandler @ Get_MemoryOffset_HighBit);
/*80478A50 00475850*/ PPC::Runtime::ASM::addi(context->r7, context->r3, fn_RxmitHandler @ Get_MemoryOffset_LowBit);
/*80478A54 00475854*/ PPC::Runtime::ASM::subfe(context->r5, context->r29, context->r0);
/*80478A58 00475858*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x328);
/*80478A5C 0047585C*/ PPC::Runtime::ASM::bl(OSSetAlarm);
/*80478A60 00475860*/ PPC::Runtime::ASM::lis(context->r3, fn_RecvCallback @ Get_MemoryOffset_HighBit);
/*80478A64 00475864*/ PPC::Runtime::ASM::addi(context->r8, context->r3, fn_RecvCallback @ Get_MemoryOffset_LowBit);
/*80478A68 00475868*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*80478A6C 0047586C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x104);
/*80478A70 00475870*/ PPC::Runtime::ASM::addi(context->r7, context->r30, 0xfc);
/*80478A74 00475874*/ PPC::Runtime::ASM::li(context->r5, 0x218);
/*80478A78 00475878*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80478A7C 0047587C*/ PPC::Runtime::ASM::li(context->r9, 0x0);
/*80478A80 00475880*/ PPC::Runtime::ASM::bl(fn_UDPReceiveAsync);
/*80478A84 00475884*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
RUNTIME_PPC_JUMP_LABEL(.L_80478A88, 0x80478A88) //this is a jump label
/*80478A88 00475888*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80478A8C 0047588C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*80478A90 00475890*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*80478A94 00475894*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80478A98 00475898*/ PPC::Runtime::ASM::blr();
}