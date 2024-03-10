import java.sql.*;  // 1

class Database
{
    public static void main(String A[]) throws Exception
    {
        String URL = "jdbc:mysql://localhost:3306/ppa41";
        String Username = "root";
        String Password = "root";
        String Query = "select * from student";

        Connection cobj = DriverManager.getConnection(URL,Username,Password); // 2

        Statement sobj = cobj.createStatement(); // 3

        ResultSet robj = sobj.executeQuery(Query); // 4

        while(robj.next()) //5
        {
            System.out.println("RID : "+robj.getInt("RID"));
            System.out.println("Name : "+robj.getString("Name"));
            System.out.println("City : "+robj.getString("City"));
            System.out.println("Marks : "+robj.getInt("Marks"));
        }
    }
}

//https://dev.mysql.com/downloads/connector/j/

// C: Java : ClassPath chya path vr thevaych ahe.

// C:\Program Files\Java\jdk-19\lib