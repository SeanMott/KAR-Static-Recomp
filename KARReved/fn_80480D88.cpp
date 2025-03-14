//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "memset.hpp"
#include "OSCreateAlarm.hpp"
#include "fn_ReceiveConfigureRequest.hpp"
#include "fn_ReceiveConfigureRequest.hpp"
#include "fn_80480B50.hpp"
#include "fn_80480B50.hpp"
#include "fn_ReceiveConfigureNak2.hpp"
#include "fn_ReceiveConfigureNak2.hpp"
#include "fn_80480BD4.hpp"
#include "fn_80480BD4.hpp"
#include "fn_80480C90.hpp"
#include "fn_80480C90.hpp"
#include "fn_80480D10.hpp"
#include "fn_80480D10.hpp"
#include "fn_80480D38.hpp"
#include "fn_80480D38.hpp"
#include "fn_Finished.hpp"
#include "fn_Finished.hpp"
#include "strlen.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_strncpy.hpp"
#include "strlen.hpp"
#include "fn_IPSetConfigError.hpp"
#include "fn_strncpy.hpp"



void fn_80480D88(PPC::Runtime::GCContext* context)
{
/*80480D88 0047DB88*/ PPC::Runtime::ASM::mflr(context->r0);
/*80480D8C 0047DB8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*80480D90 0047DB90*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*80480D94 0047DB94*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80480D98 0047DB98*/ PPC::Runtime::ASM::addi(context->r31, context->r6, 0x0);
/*80480D9C 0047DB9C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80480DA0 0047DBA0*/ PPC::Runtime::ASM::addi(context->r30, context->r5, 0x0);
/*80480DA4 0047DBA4*/ PPC::Runtime::ASM::li(context->r5, 0x298);
/*80480DA8 0047DBA8*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80480DAC 0047DBAC*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*80480DB0 0047DBB0*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80480DB4 0047DBB4*/ PPC::Runtime::ASM::addi(context->r28, context->r4, 0x0);
/*80480DB8 0047DBB8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80480DBC 0047DBBC*/ PPC::Runtime::ASM::bl(memset);
/*80480DC0 0047DBC0*/ PPC::Runtime::ASM::lis(context->r3, 0x1);
/*80480DC4 0047DBC4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x3fdf);
/*80480DC8 0047DBC8*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r29));
/*80480DCC 0047DBCC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x238);
/*80480DD0 0047DBD0*/ PPC::Runtime::ASM::bl(OSCreateAlarm);
/*80480DD4 0047DBD4*/ PPC::Runtime::ASM::lis(context->r3, fn_ReceiveConfigureRequest @ Get_MemoryOffset_HighBit);
/*80480DD8 0047DBD8*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x260, context->r29));
/*80480DDC 0047DBDC*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_ReceiveConfigureRequest @ Get_MemoryOffset_LowBit);
/*80480DE0 0047DBE0*/ PPC::Runtime::ASM::lis(context->r3, fn_80480B50 @ Get_MemoryOffset_HighBit);
/*80480DE4 0047DBE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x264, context->r29));
/*80480DE8 0047DBE8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80480B50 @ Get_MemoryOffset_LowBit);
/*80480DEC 0047DBEC*/ PPC::Runtime::ASM::lis(context->r3, fn_ReceiveConfigureNak2 @ Get_MemoryOffset_HighBit);
/*80480DF0 0047DBF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x268, context->r29));
/*80480DF4 0047DBF4*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_ReceiveConfigureNak2 @ Get_MemoryOffset_LowBit);
/*80480DF8 0047DBF8*/ PPC::Runtime::ASM::lis(context->r3, fn_80480BD4 @ Get_MemoryOffset_HighBit);
/*80480DFC 0047DBFC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26c, context->r29));
/*80480E00 0047DC00*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80480BD4 @ Get_MemoryOffset_LowBit);
/*80480E04 0047DC04*/ PPC::Runtime::ASM::lis(context->r3, fn_80480C90 @ Get_MemoryOffset_HighBit);
/*80480E08 0047DC08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x270, context->r29));
/*80480E0C 0047DC0C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80480C90 @ Get_MemoryOffset_LowBit);
/*80480E10 0047DC10*/ PPC::Runtime::ASM::lis(context->r3, fn_80480D10 @ Get_MemoryOffset_HighBit);
/*80480E14 0047DC14*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x274, context->r29));
/*80480E18 0047DC18*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80480D10 @ Get_MemoryOffset_LowBit);
/*80480E1C 0047DC1C*/ PPC::Runtime::ASM::lis(context->r3, fn_80480D38 @ Get_MemoryOffset_HighBit);
/*80480E20 0047DC20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x278, context->r29));
/*80480E24 0047DC24*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_80480D38 @ Get_MemoryOffset_LowBit);
/*80480E28 0047DC28*/ PPC::Runtime::ASM::lis(context->r3, fn_Finished @ Get_MemoryOffset_HighBit);
/*80480E2C 0047DC2C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27c, context->r29));
/*80480E30 0047DC30*/ PPC::Runtime::ASM::addi(context->r0, context->r3, fn_Finished @ Get_MemoryOffset_LowBit);
/*80480E34 0047DC34*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x280, context->r29));
/*80480E38 0047DC38*/ PPC::Runtime::ASM::li(context->r0, 0x5dc);
/*80480E3C 0047DC3C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80480E40 0047DC40*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x288, context->r29));
/*80480E44 0047DC44*/ PPC::Runtime::ASM::beq(.L_80480E7C);
/*80480E48 0047DC48*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80480E4C 0047DC4C*/ PPC::Runtime::ASM::bl(strlen);
/*80480E50 0047DC50*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xff);
/*80480E54 0047DC54*/ PPC::Runtime::ASM::ble(.L_80480E6C);
/*80480E58 0047DC58*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80480E5C 0047DC5C*/ PPC::Runtime::ASM::li(context->r4, -0x6c);
/*80480E60 0047DC60*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*80480E64 0047DC64*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80480E68 0047DC68*/ PPC::Runtime::ASM::b(.L_80480EBC);
RUNTIME_PPC_JUMP_LABEL(.L_80480E6C, 0x80480E6C) //this is a jump label
/*80480E6C 0047DC6C*/ PPC::Runtime::ASM::addi(context->r4, context->r30, 0x0);
/*80480E70 0047DC70*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x1c);
/*80480E74 0047DC74*/ PPC::Runtime::ASM::li(context->r5, 0x100);
/*80480E78 0047DC78*/ PPC::Runtime::ASM::bl(fn_strncpy);
RUNTIME_PPC_JUMP_LABEL(.L_80480E7C, 0x80480E7C) //this is a jump label
/*80480E7C 0047DC7C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80480E80 0047DC80*/ PPC::Runtime::ASM::beq(.L_80480EB8);
/*80480E84 0047DC84*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80480E88 0047DC88*/ PPC::Runtime::ASM::bl(strlen);
/*80480E8C 0047DC8C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0xff);
/*80480E90 0047DC90*/ PPC::Runtime::ASM::ble(.L_80480EA8);
/*80480E94 0047DC94*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80480E98 0047DC98*/ PPC::Runtime::ASM::li(context->r4, -0x6c);
/*80480E9C 0047DC9C*/ PPC::Runtime::ASM::bl(fn_IPSetConfigError);
/*80480EA0 0047DCA0*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80480EA4 0047DCA4*/ PPC::Runtime::ASM::b(.L_80480EBC);
RUNTIME_PPC_JUMP_LABEL(.L_80480EA8, 0x80480EA8) //this is a jump label
/*80480EA8 0047DCA8*/ PPC::Runtime::ASM::addi(context->r4, context->r31, 0x0);
/*80480EAC 0047DCAC*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x11c);
/*80480EB0 0047DCB0*/ PPC::Runtime::ASM::li(context->r5, 0x100);
/*80480EB4 0047DCB4*/ PPC::Runtime::ASM::bl(fn_strncpy);
RUNTIME_PPC_JUMP_LABEL(.L_80480EB8, 0x80480EB8) //this is a jump label
/*80480EB8 0047DCB8*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80480EBC, 0x80480EBC) //this is a jump label
/*80480EBC 0047DCBC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80480EC0 0047DCC0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80480EC4 0047DCC4*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*80480EC8 0047DCC8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80480ECC 0047DCCC*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80480ED0 0047DCD0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*80480ED4 0047DCD4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80480ED8 0047DCD8*/ PPC::Runtime::ASM::blr();
}